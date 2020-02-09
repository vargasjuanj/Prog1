#include <iostream>
#include <fstream>
#include <vector>
#include "leerVar.h"
#include "leeVecD.h"
#include "muestraV.h"
#include "desvioStandard.h"
#include "patron.h"
using namespace std;
//Vargas Juan Jose
/*
bool existe(int,int,int,int);
float calcDesvCursor(int,int,vector<vector<float>>  );
void posMaxDesv(vector<vector<float>> );
*/
int main (int argc, char *argv[]) {


int fil,col;
vector<vector<float>> matriz;
leeVarI(fil,3,11,"Tamaño Fila: ");
leeVarI(col,3,11,"Tamaño Columna: ");
leeMatD(fil,col,matriz);
muestraV(matriz);
desvDiagonal(matriz);

return 0;
}

/*
bool  existe(int f,int c,int mini,int maxi) {
	bool resul = (mini <= f && f <= maxi) &&
		(mini <= c && c <= maxi);
	return(resul);
}

float calcDesvCursor(int fi,int co,vector<vector<float>> m) {
	float resul;
	vector<float> aux;
	if(existe(fi-1,co,0,m.size()-1)) {
		aux.insert(aux.end(),m[fi-1][co]);
		
	}
	if(existe(fi+1,co,0,m.size()-1)) {
		aux.insert(aux.end(),m[fi+1][co]);
	}
	if(existe(fi+1,co-1,0,m.size()-1)) {
		aux.insert(aux.end(),m[fi+1][co-1]);
	}
	if(existe(fi+1,co+1,0,m.size()-1)) {
		aux.insert(aux.end(),m[fi+1][co+1]);
	}
	//muestraV(aux);
	resul = desvioStandard(aux);
	return(resul);
}

void posMaxDesv(vector<vector<float>> m) {
	int f,c
		,ult = m.size()
		,fMx = 0,cMx = 0;
	float dMx = calcDesvCursor(fMx,cMx,m)
		,desv;
	cout <<dMx <<endl;
	for(f=0; f<ult; f++){
		for(c=0; c<ult; c++){
			//        cout << f << (char) 9 << c << (char) 9; 
			desv = calcDesvCursor(f,c,m);
			cout <<desv <<"(" <<f <<"," <<c <<")";
			if(desv > dMx) {
				//            cout << "Recalculando...";
				fMx = f;
				cMx = c;
				dMx = desv;
			}
			cout << endl;
		}
	}
	cout << "La poifción del máximo desvío es (" << fMx <<"," << cMx <<")\n";
}


*/
