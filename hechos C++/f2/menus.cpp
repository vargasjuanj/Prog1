#include <iostream>
#include "menus.h"
#include "coord2D.h"
using namespace std;
static int cont;
void menu(int & cuantosPuntos){
	
	cout <<"Ingrese cantidad de puntos (Entre 2 y 100):  ";
	cin >>cuantosPuntos;
cont++;

	if (cont==30) {
	  system("cls");
	cout <<"ERROR FATAL: INGRESE SOLO NUMEROS..";
		exit(0);
	}
	
if (cuantosPuntos<2 || cuantosPuntos>100) menu(cuantosPuntos);

	
	
}

void menu2(Punto2D conjDePuntos[],int cuantosPuntos){
	int opc;
	do{
		cout <<"1-Asignar valores manualmente" <<endl;
		cout <<"2-Generar aleatoriamente" <<endl;
		cout <<"3-Salir" <<endl <<": ";
		cin >>opc;
		switch (opc){
		case 1:Punto2D::asignar(conjDePuntos,cuantosPuntos);
			break;
		case 2:Punto2D::modoAleatorio(conjDePuntos,cuantosPuntos);
			break;
		case 3: exit(0);
		default: system("cls");
		cout <<"Ingrese una opcion valida.." <<endl;
		}	
	}while (opc!=1 && opc!=2);
}
