#include <program1.h>
#include "intercambiar.h"
#include "coord2D.h"
#include "tam.h"
procedimiento coord2D::leePto2D() {
leerM(x,"X:");
leerM(y,"Y:");
}

funcion real coord2D::distanciar(coord2D otroPunto) {
real resul = raiz2(cuadrado(x-otroPunto.x) + cuadrado(y-otroPunto.y));
regresa(resul);
}

procedimiento coord2D::interc(coord2D porRef otroPunto) {
intercambiar(x,otroPunto.x);
intercambiar(y,otroPunto.y);
}

funcion cadena coord2D::cadCoord2D() {
cadena resul = "("+aCadena(x)+";"+aCadena(y)+")";
regresa(resul);
}

procedimiento ordena(entero t, coord2D v[]) {
real distancias[TAM];
coord2D origen = {0.0,0.0};
entero i1,i2;
variar(i1,0,t-1,1)
    distancias[i1] = v[i1].distanciar(origen);
    finVariar
variar(i1,0,t-2,1)
    variar(i2,i1+1,t-1,1)
        si(distancias[i2] < distancias[i1]) entonces
            intercambiar(distancias[i1],distancias[i2]);
            v[i1].interc(v[i2]);
            finSi
        finVariar
    finVariar
}

procedimiento leeVec2D(entero t, coord2D v[]) {
entero ind;
variar(ind,0,t-1,1)
    mostrar << "punto No." << ind+1 <<": \n";
    v[ind].leePto2D();
    finVariar
}

procedimiento muestraVec2D(entero t, coord2D v[]) {
entero ind;
variar(ind,0,t-1,1)
    mostrar << "punto No." << ind+1 <<": " << v[ind].cadCoord2D() << salto;
    finVariar
}
