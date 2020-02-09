#ifndef COORD2D_H
#define COORD2D_H
struct Punto2D{
	float x;
	float y;
	float r;
	float g;
	float g2;
	int id;
	static int puntosCreados;
	static void asignar( Punto2D[], int ) ;
	static void modoAleatorio(Punto2D[], int);
    static void polarDesde(Punto2D[],int,int);
	static void menorGrado(Punto2D[],int);
	static float distancia(Punto2D & ,Punto2D & ); //Si salta el error de que faltan 4 argumentos, no usar el program.h o cambiar el nombre distancia por otro...

	void aPolar(bool);
	void muestraPolarDesde();
	Punto2D();
	Punto2D(float,float);
	
}; 
#endif
