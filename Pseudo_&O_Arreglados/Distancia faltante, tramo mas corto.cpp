#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: La distancia faltante para completar el circuito
    El n�mero de orden del tramo m�s corto.
*/
#define distanciar(x1,y1,x2,y2)  raiz2(cuadrado(x2-x1)+cuadrado(y2-y1))

principal                                                       // Unidad de programa principal
real x,y                                                        // Punto actual (a leer)
    ,x1,y1                                                      // Primer punto (si hay)
    ,xAnt,yAnt                                                  // Punto anterior (si hay)
    ,dist                                                       // 
    ,distMasCorta;
entero estePunto = 0
      ,traMasCorto;
limpiar;                                                        // Limpia la pantalla.
iterar
    leerM(x,"X("<< estePunto+1<<"): ");
    leerM(y,"Y("<< estePunto+1<<"): ");
    salirSi(x ES 0.0 Y y ES 0.0);
    estePunto++;                                                // Se ceunta el punto
    segun (estePunto)
        caso 1: x1 = x; y1 =y;                                  // Se guarda el primer par de coordenadas
        otroCaso 2:                                             // Primer (y hasta ahora �nico) tramo.
        distMasCorta = distanciar(x,y,xAnt,yAnt);                // y la distancia es la m�s corta hasta ahora.
        traMasCorto = 1;                                        // el n�mero de tramo es 1.
        casoAsumido:
        dist = distanciar(x,y,xAnt,yAnt);                        // Se calcula la distancia entre este punto y el anterior,
        si(dist < distMasCorta) entonces                        // y si es la m�s corta,
            distMasCorta = dist;                                // se guarda la distancia
            traMasCorto = estePunto - 1 ;                       // y el n�mero de tramo.
            finSi
        finSegun
    xAnt =x; yAnt = y;                                          // Punto anterior
    finIterar
si(estePunto >= 2) entonces                                      // Si hay por lo menos 2 puntos,
    mostrar << "La distancia faltante es de " << distanciar(xAnt,yAnt,x1,y1) << salto;
    mostrar << "El tramo m�s corto es " << traMasCorto  << " (de " << distMasCorta << ")" << salto;
    finSi
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

