#ifndef PUNTO3D_H
#define PUNTO3D_H
#include <ctime>
struct Punto3D {
    Punto3D();                                                                  // Constructor
    Punto3D(float,float,float);                                                                  // Constructor
    ~Punto3D();                                                                 // Destructor
    float x;
     float y;
     float z;
     int id;
    static int cantP3D;
    void muestra();
    void leerP3D();
    float distanciar(Punto3D);
};

#endif
