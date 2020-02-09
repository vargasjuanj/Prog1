


#include <program1.h>
#include "punto3D.h"
int Punto3D::cantP3D = 0;

void Punto3D::leerP3D() {
#ifdef DEPURACION
x = alAzarRealEntre(-100.0f,100.0f);
y = alAzarRealEntre(-100.0f,100.0f);
z = alAzarRealEntre(-100.0f,100.0f);
muestra();
#else
cout << "Punto " << id << ":\n";
cout <<"x:"; cin >>x;
cout <<"y:"; cin >>y;
cout <<"z:"; cin >>z;
#endif
}

 float Punto3D::distanciar(Punto3D otroPunto) {
float resul = ((otroPunto.x - x)*(otroPunto.x - x)) + ((otroPunto.y - y)*(otroPunto.y - y)) + ((otroPunto.z - z)*(otroPunto.z - z));
resul = pow(resul,0.5);
return(resul);
}

Punto3D::Punto3D() {                                                            // Constructor
x = 0;
y = 0;
z = 0;
id = ++cantP3D;
//muestra(); //Dependiendo del tamaño del array al ser construidos los objetos mostrara x,y,z=0;
}

Punto3D::Punto3D(float estaX, float estaY, float estaZ) {                                                            // Constructor
x = estaX;
y = estaY;
z = estaZ;
id = ++cantP3D;
//muestra();
}

Punto3D::~Punto3D() {
//cout << "Destruyendo el ";
//muestra();
}

void Punto3D::muestra() {
//cout << "Punto 3D: " << id << " (" << x << ";"<< y << ";" << z <<")\n";
}
