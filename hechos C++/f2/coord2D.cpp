#include <iostream>
#include "coord2D.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "miProgram.h"
#include "menus.h"
 using namespace std;
int Punto2D::puntosCreados=0;
Punto2D::Punto2D(){ //Necesario para poder crear el array de este tipo;
x=0;
y=0;
}

Punto2D::Punto2D(float deAbcisa, float deOrdenada){
	x=deAbcisa;
	y=deOrdenada;
puntosCreados++;
id=puntosCreados+1;
}
void Punto2D:: asignar(Punto2D conjDePuntos[], int  tamanio){
 for (puntosCreados=0; puntosCreados<tamanio; puntosCreados++){
	 conjDePuntos[puntosCreados].id=puntosCreados+1;
	 cout <<"Punto: " <<conjDePuntos[puntosCreados].id <<endl;
	 cout <<"X: "; cin >>conjDePuntos[puntosCreados].x;
	 cout  <<"Y: "; cin >>conjDePuntos[puntosCreados].y;
 }
 cout <<endl <<"PUNTO UNO: (" <<conjDePuntos[0].x <<"," <<conjDePuntos[0].y <<")" ;
}

void Punto2D:: modoAleatorio(Punto2D conjDePuntos[], int tamanio){
	srand(time(0));
	float ram;
	for (puntosCreados=0; puntosCreados<tamanio; puntosCreados++){
		conjDePuntos[puntosCreados].id=puntosCreados+1;
		ram=alAzarRealEntre(-10,10);
		conjDePuntos[puntosCreados].x=ram;
		ram=alAzarRealEntre(-10,10);
		conjDePuntos[puntosCreados].y=ram;
	}
	cout <<endl;
	cout <<endl <<"PUNTO UNO: (" <<conjDePuntos[0].x <<"," <<conjDePuntos[0].y <<")  " ;
}

 float Punto2D::distancia(Punto2D  & origen, Punto2D & otroPunto){
	float xC=((origen.x)-(otroPunto.x))*((origen.x)-(otroPunto.x));
	float yC=((origen.y)-(otroPunto.y))*((origen.y)-(otroPunto.y));
	float result=sqrt(xC+yC);
return (result);
}

 void Punto2D::polarDesde(Punto2D losPuntos[],int origen, int tamanio){
	for (int i=1; i<tamanio; i++){
			losPuntos[i].aPolar(true);
			losPuntos[i].r=distancia(losPuntos[origen], losPuntos[i]);
			if(losPuntos[i].x==0) losPuntos[i].g2=0;
			losPuntos[i].g2=losPuntos[i].g-losPuntos[origen].g;
			losPuntos[i].muestraPolarDesde();
	}
}

void Punto2D::aPolar(bool estado){
	
	if(this->x==0){
		if(this->y>0) this->g=90;
		else if(this->y<0) this->g=270;
	}else if(x<0 && this->y==0) this->g=180;
	else this->g=grados360(atan2(this->y,this->x));
	
	if(this->y==0 && this->x<0) this->g=180;
	else this->g=grados360(atan2(this->y,this->x));
	
	this->r=sqrt((this->x*this->x)+(this->y*this->y));
if(estado) cout <<endl <<"P"<< this->id <<" (" <<this->x <<"," <<this->y <<")" <<" A POLAR->(Radio: " <<this->r <<" , " <<"Grados: " <<this->g <<"°";
	cout <<endl <<"                                                   (neg: "<<(this->g)-360 <<"°)" <<endl;
}

void Punto2D::muestraPolarDesde(){
	cout <<endl<<" >>Polar respecto al punto uno como origen>>" <<endl;
	cout <<"	*radio: " <<this->r <<endl;
	cout <<"	*grados: " <<this->g2 <<"°" <<endl; 
	cout <<"-------------------------" <<endl;
}

void Punto2D::menorGrado(Punto2D conjDePuntos[], int tamanio){
	float menor=0;
	float elMenor=360;
	int id=0;
	int ide=0;
	for (int i=0; i<tamanio-1; i++){
		for (int j=1; j<tamanio; j++){
		if (conjDePuntos[i].g<conjDePuntos[j].g){
			menor=conjDePuntos[i].g;
            id=conjDePuntos[i].id;		
		}
		else{ 
			menor=conjDePuntos[j].g;
			id=conjDePuntos[j].id;
		}
		if(menor<elMenor){
			elMenor=menor;
			ide=id;
		}
	}
}	
cout <<"EL PUNTO QUE PRODUCE EL MENOR ANGULO RESPECTO AL EJE >X< ES EL " <<ide <<endl <<endl;
}
