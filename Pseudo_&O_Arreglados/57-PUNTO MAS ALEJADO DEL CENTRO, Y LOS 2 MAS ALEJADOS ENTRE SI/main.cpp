/*
    program1.h es el archivo de traducci�n de seudoc�digo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Se tiene un conjunto de entre 2 y 100 coordenadas cartesianas (x ; y). Se quiere averiguar:
        - El punto más cercano al centro.
        - Los dos puntos más lejanos entre sí. de todo el conjunto.
*/
#include "punto2D.h"
#include "leerVar.h"

procedimiento leeVecP2D(entero,Punto2D[]);
procedimiento ubMasCercaDelCentro(entero,Punto2D[]);
procedimiento ubMasAlejados(entero,Punto2D[]);

constante entera TAM = 10000;

principal                                                       // Unidad de programa principal
Punto2D vP[TAM];
entero cantP;
limpiar;                                                        // Limpia la pantalla.
leerVar(cantP,2,TAM,"Cantidad de puntos");
leeVecP2D(cantP,vP);
ubMasCercaDelCentro(cantP,vP);
ubMasAlejados(cantP,vP);
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

procedimiento ubMasAlejados(entero t, Punto2D v2D[]) {
entero iMa1 = 0
      ,iMa2 = 1
      ,i1,i2;
real distMaxima = v2D[0].distanciA(v2D[1])
    ,dist;
variar(i1,0,t-2,1)
    variar(i2,i1+1,t-1,1)
        dist = v2D[i1].distanciA(v2D[i2]);
        si(dist >= distMaxima) entonces
            distMaxima = dist;
            iMa1 = i1;
            iMa2 = i2;
            finSi
        finVariar
    finVariar
mostrar << "Los puntos más alejados son el ";
v2D[iMa1].muestra();
mostrar << " y el ";
v2D[iMa2].muestra();
}

procedimiento ubMasCercaDelCentro(entero t, Punto2D v2D[]) {
entero iPMCCent = 0
      ,i;
real distMinAlCuad = cuadrado(v2D[0].x) + cuadrado(v2D[0].y)
    ,dist;
variar(i,1,t-1,1)
    dist = cuadrado(v2D[i].x) + cuadrado(v2D[i].y);
    si(dist < distMinAlCuad) entonces
        distMinAlCuad = dist;
        iPMCCent = i;
        finSi
    finVariar
mostrar << "El más cercano al centro es el ";
v2D[iPMCCent].muestra();
}

procedimiento leeVecP2D(entero t, Punto2D v2D[]) {
entero i;
variar(i,0,t-1,1)
    v2D[i].leerP2D();
    finVariar
}
