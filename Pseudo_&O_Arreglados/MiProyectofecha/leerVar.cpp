#include <iostream>
#include "leerVar.h"
using namespace std;
/**
*    Procedimiento de lectura validada por rango (Código genérico)
*/

template <typename T>
void leerVar(T & varALeer,T vMin,T vMax,string mens){
if(vMin <= vMax) {
    do{
        
		cout<< mens<<"(entre "<<vMin<<" y "<<vMax<<"): "; cin >> varALeer;
		if(vMin <=varALeer && varALeer <= vMax) break;
        cout << "Valor fuera de rango..." <<endl;
	}while(2<3);
}else{
    leerVar(varALeer,vMax,vMin,mens);
	}
cout <<varALeer <<endl;
}

//funciones sobrecargasdas cambio n�mero y/o tipo de argumentos o parametros.
template void leerVar(int &,int,int,string );
//template void leerVar(double &,double,double,const char[4]);
