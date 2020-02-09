#include <program1.h>
#include "desvioStandard.h"
#include "promedioV.h"
plantilla(Tipo)
funcion Tipo desvioStandard(vectorDin(Tipo) v) {
Tipo resul
    ,t = tamanio(v)
    ,suma = 0.0
    ,media = promedioV(v);
entero i;
variarMas1(i,0,t-1)
    suma += cuadrado(v[i] - media);
    finVariar
resul = raiz2(suma / t);
regresa(resul);
}
implementa funcion real desvioStandard(vectorDin(real));
//
//funcion real desvioStandard(entero t, real v[]) {
//real resul
//    ,suma = 0.0
//    ,media = promedioV(t,v);
//entero i;
//variarMas1(i,0,t-1)
//    suma += cuadrado(v[i] - media);
//    finVariar
//resul = raiz2(suma / t);
//regresa(resul);
//}
