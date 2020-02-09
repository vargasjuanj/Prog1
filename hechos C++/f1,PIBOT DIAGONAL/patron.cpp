#include "patron.h"
#include "desvioStandard.h"
#include "muestraV.h"
//NO puedo ponerla como plantilla, me salta error.
bool existe(int f,int c,int mini,int maxiF,int maxiC) {
	bool resul = (mini <= f && f <= maxiF) &&
		(mini <= c && c <= maxiC);
	return(resul);
}

float calcDesvCursor(int fi,int co,vector<vector<float>> m) {
	float resul;
	vector<float> aux;
	int cont=0;

	aux.insert(aux.end(),m[fi][co]);
	
	
	if(existe(fi+1,co+1,0,m.size()-1,m[0].size()-1)) {
		aux.insert(aux.end(),m[fi+1][co+1]);
		cont++;
	}

	if(existe(fi+2,co+2,0,m.size()-1,m[0].size()-1)) {
		aux.insert(aux.end(),m[fi+2][co+2]);
		cont++;
	}

	
	//muestraV(aux);
	if (cont==2){
	resul = desvioStandard(aux);
	cout <<endl  <<"Diagonal: " <<"(" <<fi <<"," <<co <<") " <<"(" <<fi+1 <<"," <<co+1 <<") " <<"(" <<fi+2 <<"," <<co+2 <<") ";
	cout <<m[fi][co] << " " <<m[fi+1][co+1] <<" " <<m[fi+2][co+2] ;
	return(resul);
	}else return 0.0;
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
			if(desv > dMx) {
				//            cout << "Recalculando...";
				fMx = f;
				cMx = c;
				dMx = desv;
			}
			cout << endl;
		}
	}
	cout << "La posición del máximo desvío es (" << fMx <<"," << cMx <<")\n";
}

//template void posMaxDesv(vector<vector<float>>); //error, quizas al ser un argumento no hace falta, no se  

