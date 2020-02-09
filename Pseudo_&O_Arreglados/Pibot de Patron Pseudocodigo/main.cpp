#include <program1.h>
#include "leerVar.h"
#include "leeVecD.h"
#include "muestraV.h"
#include "desvioStandard.h"
/**
*    Enunciado: Procese una matriz cuadrada de hasta 27 filas por 27 columnas, cuyo tama√±o real debe leerse (de 
                datos.txt) y ser siempre impar (incumplimiento penalizado con -10%).
m√°ximo desv√≠o est√°ndar de la zona circundante:
-0-
-X-
000
*/
logico funcion existe(entero f,entero c,entero mini,entero maxi) {
logico resul = (mini <= f Y f <= maxi) Y
               (mini <= c Y c <= maxi);
regresa(resul);
}

funcion real calcDesvCursor(entero fi,entero co,matrizDin2D(real) m) {
real resul;
vectorDin(real) aux;
si(existe(fi-1,co,0,tamanio(m)-1)) entonces
    agregaEleVDin(aux,m[fi-1][co]);
    finSi
si(existe(fi+1,co,0,tamanio(m)-1)) entonces
    agregaEleVDin(aux,m[fi+1][co]);
    finSi
si(existe(fi+1,co-1,0,tamanio(m)-1)) entonces
    agregaEleVDin(aux,m[fi+1][co-1]);
    finSi
si(existe(fi+1,co+1,0,tamanio(m)-1)) entonces
    agregaEleVDin(aux,m[fi+1][co+1]);
    finSi
//muestraV(aux);
resul = desvioStandard(aux);
regresa(resul);
}

procedimiento posMaxDesv(matrizDin2D(real) m) {
entero f,c
      ,ult = tamanio(m) - 1
      ,fMx = 0,cMx = 0;
real dMx = calcDesvCursor(fMx,cMx,m)
    ,desv;
variarMas1(f,0,ult)
    variarMas1(c,0,ult)
//        mostrar << f << tabulado << c << tabulado; 
        desv = calcDesvCursor(f,c,m);
        si(desv > dMx) entonces
//            mostrar << "Recalculando...";
            fMx = f;
            cMx = c;
            dMx = desv;
            finSi
        mostrar << salto;
        finVariar
    finVariar
mostrar << "La posiciÛn del m·ximo desvÌo es (" << fMx <<"," << cMx <<")\n";
}

principal                                                       // Unidad de programa principal
entero tam;
limpiar;                                                        // Limpia la pantalla.
leeVarI(tam,3,27,"TamaÒo:");
matrizDin2D(real) matriz;
leeMatD(tam,tam,matriz);
//muestraV(matriz);
mostrar << salto;
posMaxDesv(matriz);
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
