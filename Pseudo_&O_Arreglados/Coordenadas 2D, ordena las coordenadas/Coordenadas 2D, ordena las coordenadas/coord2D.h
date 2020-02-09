#ifndef COORD2D_H
#define COORD2D_H
#include <iostream>
using namespace std;
struct coord2D {
     float x;
     float y;
     void leePto2D();
	 float distanciA(coord2D);
     void interc(coord2D &);
     string cadCoord2D();
    };
  
void leeVec2D(int,coord2D[]);
void muestraVec2D(int,coord2D[]);
void ordena(int,coord2D[]);
#endif
