#include "leerVar.h"
#include <iostream>
using namespace std;


template <typename Tipo>
void leeVar(Tipo & v,Tipo vMin, Tipo vMax,string mens) {
if(vMin <= vMax) {
    do{
        cout <<mens; cin >>v;
        if(vMin <= v && v <= vMax) break;
        
		cout << "Debe estar entre " << vMin << " y " << vMax << endl;
	}while(true);
}else leeVar(v,vMax,vMin,mens);
    
	
}
template void leeVar(float &,float,float,string);
template void leeVar(int &,int,int,string);

template <typename Tipo>
void leeVarI(Tipo & v,Tipo vMin, Tipo vMax,string mens) {
do{
    leeVar(v,vMin,vMax,mens);
}while (v%2!=1);
}


template void leeVarI(int &,int,int,string);
