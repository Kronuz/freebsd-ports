--- ../work/gctpc/source/cproj.h	Fri Nov 19 14:32:06 1993
+++ cproj.h	Sun Feb 11 12:32:19 2001
@@ -1,3 +1,6 @@
+#ifndef INCLUDED_CPROJ_H
+#define INCLUDED_CPROJ_H
+
 #include <math.h>
 
 #define PI 	3.141592653589793238
@@ -26,3 +29,32 @@
 
 #define IMOD(A, B)      (A) - (((A) / (B)) * (B)) /* Integer mod function */
 
+/* Not part of the original gctpc distribution. */
+
+#ifdef NEED_SINCOS
+void
+sincos(double val, double *sin_val, double *cos_val);
+#endif
+
+double asinz (double con);
+double msfnz (double eccent, double sinphi, double cosphi);
+double qsfnz (double eccent, double sinphi, double cosphi);
+double phi1z (double eccent, double qs, long int *flag);
+double phi2z(double eccent, double ts, long int *flag);
+double phi3z(double ml, double e0, double e1, double e2, double e3, long int *flag);
+double phi4z (double eccent, double e0, double e1, double e2, double e3,
+              double a, double b, double *c, double *phi);
+double pakcz(double pak);
+double pakr2dm(double pak);
+double tsfnz(double eccent, double phi, double sinphi);
+int sign(double x);
+double adjust_lon(double x);
+double e0fn(double x);
+double e1fn(double x);
+double e2fn(double x);
+double e3fn(double x);
+double e4fn(double x);
+double mlfn(double e0, double e1, double e2, double e3, double phi);
+long calc_utm_zone(double lon);
+
+#endif  // INCLUDED_CPROJ_H
