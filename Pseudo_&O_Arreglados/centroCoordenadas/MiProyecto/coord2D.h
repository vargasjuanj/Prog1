#ifndef COORD2D_H
#define COORD2D_H
#include <program1.h>
estructura coord2D {
    campo real x;
    campo real y;
    procedimiento leePto2D();
    funcion real distanciar(coord2D);
    procedimiento interc(coord2D porRef);
    funcion cadena cadCoord2D();
    };
    
procedimiento leeVec2D(entero,coord2D[]);
procedimiento muestraVec2D(entero,coord2D[]);
procedimiento ordena(entero,coord2D[]);
#endif
