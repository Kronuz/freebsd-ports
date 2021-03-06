--- unarj-2.65.orig/unarj.c
+++ unarj.c
@@ -217,7 +217,7 @@ static uchar  arj_flags;
 static short  method;
 static uint   file_mode;
 static ulong  time_stamp;
-static short  entry_pos;
+static ushort entry_pos;
 static ushort host_data;
 static uchar  *get_ptr;
 static UCRC   file_crc;
@@ -608,6 +608,7 @@ char *name;
         error(M_BADHEADR, "");
 
     crc = CRC_MASK;
+    memset(header, 0, sizeof(header));
     fread_crc(header, (int) headersize, fd);
     header_crc = fget_crc(fd);
     if ((crc ^ CRC_MASK) != header_crc)
@@ -632,9 +633,13 @@ char *name;
 
     if (origsize < 0 || compsize < 0)
         error(M_HEADRCRC, "");
+    if(first_hdr_size > headersize-2) /* need two \0 for file and comment */
+        error(M_BADHEADR, "");
 
     hdr_filename = (char *)&header[first_hdr_size];
     strncopy(filename, hdr_filename, sizeof(filename));
+    if(entry_pos >= strlen(filename))
+        error(M_BADHEADR, "");
     if (host_os != OS)
         strparity((uchar *)filename);
     if ((arj_flags & PATHSYM_FLAG) != 0)
@@ -733,11 +738,11 @@ extract()
 
     no_output = 0;
     if (command == 'E')
-        strcpy(name, &filename[entry_pos]);
+        strncopy(name, &filename[entry_pos], sizeof(name));
     else
     {
         strcpy(name, DEFAULT_DIR);
-        strcat(name, filename);
+        strncopy(name+strlen(name), filename, sizeof(name)-strlen(name));
     }
 
     if (host_os != OS)
