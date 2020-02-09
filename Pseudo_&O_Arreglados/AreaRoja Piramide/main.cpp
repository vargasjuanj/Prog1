// Archivo de traducción de seudocódigo a C++
#include <program1.h>
#include "leerVar.h"
#include "muestraV.h"
#include "leeVecD.h"
/**
*    Enunciado: Dada una matriz cuadrada de hasta 17 filas por columnas cuyo tamaño real lo
                elige el usuario y es siempre impar. Calcular el desvio estandar de:
12345
12345
12x45
1xxx5
xxxxx
*/

procedimiento areaRoja(matrizDin2D(real) m) {
vectorDin(real) v;
entero f,c,izq,der;
izq = 0;
f = der = tamanio(m) - 1;
mientras(izq <= der)
    variarMas1(c,izq,der)
        agregaEleVDin(v,m[f][c]);
        finVariar
    izq++;
    der--;
    f--;
    finMientras
muestraV(v);
}

principal                                                       // Unidad de programa principal
entero tam,f,c;
matrizDin2D(real) mat;
limpiar;                                                        // Limpia la pantalla.
leerVar(tam,3,17,"Tamaño:");
vectorDin(real) fila(tam);
variarMas1(f,1,tam)
    leeVecD(fila);        
    agregaEleVDin(mat,fila);
    finVariar
muestraV(mat);
areaRoja(mat);
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal.
