#include <iostream>
using namespace std;
#include "leerVar.h"
#include "leeVecD.h"
#include "muestraV.h"
#include "desvioStandard.h"


/**
*    Enunciado: Procese una matriz cuadrada de hasta 27 filas por 27 columnas, cuyo tama√±o float debe leerse (de 
                datos.txt) y ser ifempre impar (incumplimiento penalizado con -10%).
m√°ximo desv√≠o est√°ndar de la zona circundante:
-0-
-X-        //Patron, la x es el cursor y los circulos su zona circundante (la celda de la x no se incluye en el calculo),
000        //Este patron va pivoteando, se va moviendo de celda en celda, a veces entra completo, a veces no
*/
// pone un limite entre -555 y 555 por ej.
void aplana(vector<vector<float>> & m, float vMin, float vMax) {
	for(vector<float> & fila : m){
		for (float & ele : fila){
		if(ele > vMax){
		ele = vMax;
		}else if(ele < vMin){
		ele = vMin;
		}
	}
}
}

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
cout << "La poifciÛn del m·ximo desvÌo es (" << fMx <<"," << cMx <<")\n";
}

int main(){                                                // Unidad de programa principal
int tam;
system("cls");                                                // Limpia la pantalla.
leeVarI(tam,3,27,"TamaÒo:");
vector<vector<float>> matriz;
leeMatD(tam,tam,matriz);
//muestraV(matriz);
cout << endl;
posMaxDesv(matriz);
system("PAUSE");                                              // Pausa antes de finalizar. 
return 0;
}// Fin de unidad de programa principal
