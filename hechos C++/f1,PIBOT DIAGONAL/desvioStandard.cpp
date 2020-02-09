#include "desvioStandard.h"
#include "promedioV.h"
#include <cmath>
#include <iostream>
#include "patron.h"

using namespace std;
template <typename Tipo>
 Tipo desvioStandard(vector<Tipo> v) {
Tipo resul
    ,t = v.size()
    ,suma = 0.0
    ,media = promedioV(v);
int i;
for(i=0;i<t; i++){
    suma += (v[i] - media)*(v[i] - media);
}
resul = sqrt(suma / t);
return(resul);
}
template float desvioStandard(vector<float>);


float desvioStandard(int t, float v []) {
float resul
    ,suma = 0.0
   ,media = promedioV(t,v);
int i;
for(i=0;i<t;i++){
    suma += (v[i] - media)*(v[i] - media);
  }
resul = sqrt(suma / t);
return(resul);
}

template <typename Tipo>
void desvZona(vector<vector<Tipo>> & mat ){
vector<Tipo> aux;	
cout <<endl;
for (Tipo i=0; i<mat.size(); i++){
	for (Tipo j= (mat.size()/2)+1; j<mat.size(); j++){
		aux.insert(aux.end(),mat[i][j]);
		cout <<mat[i][j] <<" ";
	}
  }
cout <<endl;
for (Tipo i=(mat.size()/2)+1; i<mat.size(); i++){
	for (Tipo j=0; j<(mat.size()/2)+1; j++){
		aux.insert(aux.end(),mat[i][j]);
		cout <<mat[i][j] <<" ";
	}
}
cout <<endl;
for(Tipo i=1; i<(mat.size()/2)+1; i++){
	for(Tipo j=0; j<i ; j++){
		aux.insert(aux.end(),mat[i][j]);
		cout <<mat[i][j] <<" ";
	}
}
cout <<endl <<"El desvio de la zona blanca es : " <<desvioStandard(aux);
}
template void desvZona(vector<vector<float>> &);



template <typename Tipo>
void desvDiagonal(vector<vector<Tipo>> & mat){
float desv=0.0,desvMax=calcDesvCursor(0,0,mat);	
int f=0,c=0,cont=0;	

for (Tipo i=0; i<mat.size(); i++){
	for (Tipo j=0; j<mat[0].size(); j++){
		desv=calcDesvCursor(i,j,mat);
		if (desv>0){ 
			cont++;
			cout <<"   desv  " <<desv ;
		}
		if(desv>desvMax) {
			desvMax=desv;
			f=i;
			c=j;
			
		}
	}
	
}
	cout <<endl <<"Total de Diagonales: " <<cont <<endl;
	cout <<endl << "La diagonal con el mayor desvio estandar"  <<" (" 
	<<desvMax  <<")" <<endl<<" se encuentra en las posiciones: " <<endl
	<<(char) 9 <<"(" <<f <<"," <<c <<") " <<"(" <<f+1 <<"," <<c+1 <<") " <<"(" <<f+2 <<"," <<c+2 <<") ";
}
template void desvDiagonal(vector<vector<float>> &);
