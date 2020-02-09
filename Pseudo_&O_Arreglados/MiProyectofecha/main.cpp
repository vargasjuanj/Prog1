#include <iostream>
#include "leerVar.h"
#include <program1.h>
using namespace std;
/**
*    Enunciado: Dadas dos fechas v�lidas, calcular las distancia en d�as entre ellas.
*/
struct fecha {
    int dia;
    int mes;
    int anio;};
    
void leeFecha(fecha &);
string cadFecha(fecha);
inline string bCadena(int nro) {
	string resul;
	if(nro >= 10){
		resul = bCadena(nro/10) + bCadena(nro % 10);
	}else if(nro < 0) {
		resul = "-" + bCadena(-nro);
	}else{
		switch(nro){
		case 0      : resul = "0";
	break; case 1  : resul = "1";
	break; case 2  : resul = "2";
	break; case 3  : resul = "3";
	break; case 4  : resul = "4";
	break; case 5  : resul = "5";
	break; case 6  : resul = "6";
	break; case 7  : resul = "7";
	break; case 8  : resul = "8";
	break; case 9  : resul = "9";
	break; default : resul = "*";
	}
  }
		return (resul);
}


int cantDias(int,int);


bool esBisiesto(int);

int diasEntre(fecha,fecha);
void sumaUnDia(fecha porRef);


int main (int argc, char *argv[]) {                                                 // Unidad de programa principal
fecha f1,f2;                                                    // Se declaran las fechas.
system("cls");                                                        // Limpia la pantalla.
leeFecha(f1);                                                   // Se lee la primer fecha.
leeFecha(f2);                                                   // Se lee la segunda fecha.
cout << "La cantidad de d�as entre el "<< cadFecha(f1) << " y el " << cadFecha(f2) << " es de " << diasEntre(f1,f2) << " dias.\n";
getchar(); //pausa
return 0;
}                                                    // Fin de unidad de programa principal


bool operator ==(fecha unaFecha,fecha otraFecha) {    // Sobrecargamos el operador de comparaci�n ==
bool resul = unaFecha.anio == otraFecha.anio &&
               unaFecha.mes  == otraFecha.mes  &&
               unaFecha.dia  == otraFecha.dia;
return(resul);
}

bool operador !=(fecha unaFecha,fecha otraFecha) {  // Sobrecargamos el operador de comparaci�n ==
bool resul =  !(unaFecha == otraFecha);
return(resul);
}

bool operator <(fecha unaFecha,fecha otraFecha) {     // Sobrecargamos el operador <
bool resul = ((unaFecha.anio <  otraFecha.anio) ||
               (unaFecha.anio == otraFecha.anio) )&& ((unaFecha.mes <  otraFecha.mes) ||
                                                  (unaFecha.mes == otraFecha.mes)) && (unaFecha.dia < otraFecha.dia);
return(resul);
}
bool operator >(fecha unaFecha,fecha otraFecha) {     // Sobrecargamos el operador >
bool resul = ((unaFecha.anio >  otraFecha.anio) ||
               unaFecha.anio == otraFecha.anio) && ((unaFecha.mes >  otraFecha.mes) ||
                                                  (unaFecha.mes == otraFecha.mes)) && (unaFecha.dia > otraFecha.dia);
regresa(resul);
}

funcion logico operador >=(fecha unaFecha,fecha otraFecha) {     // Sobrecargamos el operador >
logico resul = NO (unaFecha < otraFecha);
regresa(resul);
}

bool operator <=(fecha unaFecha,fecha otraFecha) {     // Sobrecargamos el operador >
bool resul = ! (unaFecha > otraFecha);
return(resul);
}

fecha operator ++(fecha &unaFecha) {                       // Sobrecargamos el operador ++
unaFecha.dia++;                                                 // Incrementamos el d�a en 1,
if(unaFecha.dia > cantDias(unaFecha.anio,unaFecha.mes)) {// si se pasa del �ltimo d�a del mes,
    unaFecha.dia = 1;                                           // pasa al 1� del 
    unaFecha.mes++;                                             // mes siguiente,
    if(unaFecha.mes > 12) {                              // y si se pasa de Diciembre,
        unaFecha.mes = 1;                                       // pasa a Enero,
        unaFecha.anio++;                                        // del a�o siguiente.
	}
  }
}

fecha operator--(fecha &unaFecha) {                       // Sobrecargamos el operador ++
unaFecha.dia--;                                                 // Decrementamos el d�a en 1,
if(unaFecha.dia < 1) {                                   // si es menos que el d�a 1 del mes,
    unaFecha.mes--;                                             // pasamos al mes anterior,
    if(unaFecha.mes < 1) {                               // y si fuera antes de Enero,
        unaFecha.mes = 12;                                      // se pasa a Diciembre,
        unaFecha.anio--;                                        // del a�o anterior.
	}
    unaFecha.dia = cantDias(unaFecha.anio,unaFecha.mes);        // Y queda en el �ltimo d�a de ese mes y ese a�o. 
  }
}

int diasEntre(fecha unaFecha, fecha otraFecha) {
int resul;
if(unaFecha < otraFecha){                               // Si unaFecha < otraFecha
    fecha estaFecha = unaFecha;                                 // usa unaFecha como fecha inicial
    resul = 0;                                                  // e inicializa la cuenta de d�as en 0
    do{
        resul++;                                                // y los cuenta  
        ++estaFecha;                                            // y los suma de a uno
	}while(estaFecha != otraFecha);                          // hasta llegar a otraFecha.  
}else if(unaFecha > otraFecha) {                       // Sino, si unaFecha > otraFecha
    resul = -diasEntre(otraFecha,unaFecha);                     // se calcula igual que invirtiendo los par�metros y cambiando el signo.
}else{                                 // Sino, son iguales: 0 d�as.
    resul = 0;
     }
return(resul);
}

string cadFecha(fecha f) {
string resul = bCadena(f.dia) + "/" + bCadena(f.mes) + "/" + bCadena(f.anio);
return(resul);
}


void leeFecha(fecha & estaFecha) {
cout <<"A�o:"; cin >>estaFecha.anio;
leerVar(estaFecha.mes,1,12,"Mes");
leerVar(estaFecha.dia,1,cantDias(estaFecha.anio,estaFecha.mes),"D�a:");
}



int cantDias(int anio, int mes) {
int resul;
switch(mes){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: resul = 31;
    break; case 2: resul = fSi(esBisiesto(anio),29,28);
    break; case 4: case 6: case 9: case 11: resul = 30;
}
return(resul); 
}

bool esBisiesto(int a) {

bool resul = ((esMult(a,4)) &&  !(esMult(a,100))) || (esMult(a,400));
return(resul);
}

