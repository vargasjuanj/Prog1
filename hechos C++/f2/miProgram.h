#ifndef MIPROGRAM_H
#define MIPROGRAM_H
#include <math.h>
#define PI                      3.1415927
#define fSi(x,y,z)                  (x?y:z)
#define grados(x)                   (180.0/PI*(x))
#define radianes(x)                 (PI/180.0*(x))
#define grados360(x)                grados(fSi(x < 0,(x+2*PI),(x)))

#define real                          float
// Al azar
#define iniciAlAzar                 srand(time(NULL))
#define alAzar                      rand()
#define alAzarHasta(x)              (alAzarReal*(x))
#define alAzarEntre(x,y)            ((x)+alAzarHasta((y)-(x)))
#define alAzarReal                  (rand()/(real)RAND_MAX)
#define alAzarRealEntre(x,y)        (x+(y-x)*alAzarReal)
#define decimales(x,deci)           (entero)((x)*XalaY(10,deci))/XalaY(10,deci)
//#define alAzarDecHasta(x,y)    alAzarHasta(x * (entero)XalaY(10,x))/XalaY(10,x)
#endif
