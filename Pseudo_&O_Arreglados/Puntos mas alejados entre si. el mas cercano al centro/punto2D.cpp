#include <program1.h>
#include "punto2D.h"
entero Punto2D::cantP2D = 0;

procedimiento Punto2D::leerP2D() {
#ifdef DEPURACION
x = alAzarRealEntre(-100.0f,100.0f);
y = alAzarRealEntre(-100.0f,100.0f);
//muestra();
#else
mostrar << "Punto " << id << ":\n";
leerM(x,"x:");
leerM(y,"y:");
#endif
}

funcion real Punto2D::distanciar(Punto2D otroPunto) {
real resul = cuadrado(otroPunto.x - x) + cuadrado(otroPunto.y - y);
resul = XalaY(resul,0.5);
regresa(resul);
}

Punto2D::Punto2D() {                                                            // Constructor
x = 0;
y = 0;
id = ++cantP2D;
//muestra();
}
Punto2D::Punto2D(real estaX, real estaY) {                                                            // Constructor
x = estaX;
y = estaY;
id = ++cantP2D;
//muestra();
}

Punto2D::~Punto2D() {
//mostrar << "Destruyendo el ";
//muestra();
}

procedimiento Punto2D::muestra() {
mostrar << "Punto: " << id << " (" << x << ";"<< y <<")\n";
}
