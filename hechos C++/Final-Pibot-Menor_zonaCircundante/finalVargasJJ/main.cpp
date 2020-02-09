#include <iostream>
using namespace std;
#include "leerVar.h"
#include "leeVecD.h"
#include "muestraV.h"
//Vargas Juan Jose




bool  existe(int f,int c,int mini,int maxi) {
bool resul = (mini <= f && f <= maxi) &&
               (mini <= c && c <= maxi);
return(resul);
}

 float zonaCircundante(int fi,int co,vector<vector<float>> m) {
float resul=1;
if(existe(fi,co-1,0,m.size()-1)) {

	if (m[fi][co]>=m[fi][co-1]) resul++;
    }
if(existe(fi-1,co+1,0,m.size()-1)) {

	if (m[fi][co]>=m[fi-1][co+1]) resul++;
    }
if(existe(fi,co+1,0,m.size()-1)) {

	if (m[fi][co]>=m[fi][co+1]) resul++;
    }
if(existe(fi+1,co+1,0,m.size()-1)) {

	if (m[fi][co]>=m[fi+1][co+1]) resul++;
    }


return(resul);
}



void cursorMenor(vector<vector<float>> v){
vector <int> filas;
vector <int> columnas;
int tam=v.size();

	float menor=-1;
	for (int i=0; i<tam; i++){
		for (int j=0; j<tam; j++){
			menor=zonaCircundante(i,j,v);
			if (menor==1) {
			 filas.insert(filas.end(),i);
			 columnas.insert(columnas.end(),j);
			}
		}
	}
int tam2=filas.size();
	cout <<"Posiciones donde el cursor fue menor a su zona circundante: " <<endl;
	for (int k=0; k<tam2; k++){
		cout <<"(" <<filas[k] <<"," <<columnas[k] <<")" <<endl;

	}
}




int main(int argc, char *argv[]) {                                               // Unidad de programa principal
int tam;
vector<vector<float>> matriz;
leeVar(tam,1,11,"Tamaño: ");
leeMatD(tam,tam,matriz);
muestraV(matriz);
cursorMenor(matriz);
system("PAUSE");                                              // Pausa antes de finalizar. 
return EXIT_SUCCESS;}
// Fin de unidad de programa principal
