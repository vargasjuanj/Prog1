#include <iostream>
#include "menus.h"
#include "coord2D.h"


//azar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "miProgram.h"
using namespace std;
//Vargas Juan Jose
/*
srand(time(0)); //SE DEBE COLOCAR PARA INICIALIZAR;
float a=(rand()%10);
a/=100;
int a=1+rand()%(4-1); (lim infer+rand()&((lim sup+1)-lim inf); //ENTRE 1 Y 3 INCLUIDOS)
*/
int main (int argc, char *argv[]) {
int cantPuntos;
menu(cantPuntos);
Punto2D p2D[cantPuntos];
menu2(p2D,cantPuntos); //Se debe pasar su tamaño;
p2D[0].aPolar(true);
cout <<"----------------------------------------------" <<endl;
Punto2D::polarDesde(p2D,p2D[0].id-1,cantPuntos);
Punto2D::menorGrado(p2D,cantPuntos);
getchar();
return 0;
}

