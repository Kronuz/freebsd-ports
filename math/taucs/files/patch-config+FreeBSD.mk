--- config/FreeBSD.mk.orig	2003-08-28 11:13:38.000000000 -0400
+++ config/FreeBSD.mk	2012-07-10 07:43:24.000000000 -0400
@@ -9,30 +9,24 @@
 DEFFLG=-D
 
 FC        ?= f77
-FFLAGS    += -Os -fno-second-underscore
+FFLAGS    += $(PICFLAG)
 FOUTFLG   =-o 
 
 #CC        = cc
-CFLAGS    += -Os -D_POSIX_C_SOURCE=199506L -fPIC
+CFLAGS    += $(PICFLAG)
 COUTFLG   = -o
 
-LD        = $(CC) 
-LDFLAGS   = $(CFLAGS) -static
+LD        = $(FC)
+LDFLAGS  := -L$(DIRLIB) -L./ $(LDFLAGS)
 LOUTFLG   = $(COUTFLG)
 
-AR        = ar cr
+AR        += cr
 #AOUTFLG   =
 
-RANLIB    = ranlib
 RM        = rm -rf
 
-LIBBLAS   = -L/usr/local/lib -lf77blas -lcblas -latlas -lg2c
-LIBLAPACK = -L/usr/local/lib -llapack
 
-LIBMETIS  = -L/usr/local/lib -lmetis 
 
-LIBF77 = -lg2c  
 #compat is required for ftime()
-LIBC   = -lm -lcompat 
 
 #########################################################
