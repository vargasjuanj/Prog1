#include <program1.h>
/* 
    Módulo de cálculo de promedio de vectores
*/

funcion real promedioV(entero t, real v[]) {
real suma = 0.0;
entero i;
variar(i,0,t-1,1)
    suma += v[i];
    finVariar
regresa (suma/t);
}

plantilla(Tipo)
funcion Tipo promedioV(vectorDin(Tipo) v) {
Tipo suma = 0.0;
entero i, t = tamanio(v);
variar(i,0,t-1,1)
    suma += v[i];
    finVariar
regresa (suma/t);
}
implementa funcion real promedioV(vectorDin(real));
