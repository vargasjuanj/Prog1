#ifndef Punto2D_H
#define Punto2D_H
#include <program1.h>
estructura Punto2D {
    Punto2D();                                                                  // Constructor
    Punto2D(real,real);                                                                  // Constructor
    ~Punto2D();                                                                 // Destructor
    campo real x;
    campo real y;
    campo entero id;
    campo estatico entero cantP2D;
    procedimiento muestra();
    procedimiento leerP2D();
    funcion real distanciA(Punto2D);
};

#endif
