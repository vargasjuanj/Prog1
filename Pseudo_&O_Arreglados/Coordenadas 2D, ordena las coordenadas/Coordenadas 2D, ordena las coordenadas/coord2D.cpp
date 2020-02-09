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
coord2D origen = {0.0,0.0}; //Es un solo objeto no un array, el primer 0.0 pertenece a x, el oro a y;
                            //Es un tipo de constructor;
entero i1,i2;

//cout <<"ORIGEN: " <<origen.x;
variar(i1,0,t-1,1)
    distancias[i1] = v[i1].distanciar(origen);
    finVariar
variar(i1,0,t-2,1)
    variar(i2,i1+1,t-1,1) // A se compara con B y C (2 comparaciones), luego B con C;  
        si(distancias[i2] < distancias[i1]) entonces
            intercambiar(distancias[i1],distancias[i2]);
            v[i1].interc(v[i2]);
            finSi
        finVariar
    finVariar
}

void leeVec2D(int t, coord2D v[]) {
int ind;
for(ind=0; ind<t; ind++){
    cout << "punto No." << ind+1 <<": \n";
    v[ind].leePto2D();
  }
}

procedimiento muestraVec2D(entero t, coord2D v[]) {
entero ind;
variar(ind,0,t-1,1)
    mostrar << "punto No." << ind+1 <<": " << v[ind].cadCoord2D() << salto;
    finVariar
}
