#include "leeVecD.h"
#include <iostream>
#include <fstream>
using namespace std;
template <typename Tipo>
void leeMatD(int cF,int cC, vector<vector<Tipo>> & v) {
Tipo i;
float entra;
fstream sale("datos.txt",ios::in);
sale>>entra;
vector<Tipo> fila(cC);
for(i=0;i<cF;i++){
    leeVecD(fila,sale,entra);
    v.insert(v.end(),fila);
}
}
template void leeMatD(int,int, vector<vector<float>> &);

template <typename Tipo>
void leeVecD(int n, vector<Tipo> & v) {
Tipo i,valor;
for(i=0; i<n; i++){
    cin>>valor;
    v.insert(v.end(),valor);
 }
}
template void leeVecD(int, vector<long> &);
template void leeVecD(int, vector<float> &);


template <typename Tipo>
void leeVecD(vector<Tipo> & v, fstream & data, float  & entra ) {
	for(auto & ele: v){
//    cout <<"Valor:"; cin>>ele;
		data>>entra;
		if(entra<-555) ele=-555;
		else if (entra >555) ele=555;
		else ele=entra;

    }
}

template void leeVecD(vector<float> &,fstream &, float &);
//template void leeVecD(vector<float> &);
/*
template <typename Tipo>
void generaVecAlAzar(vector<Tipo> & v) {
for(auto & ele: v){
    ele = alAzarHasta(v.size());
    }
}
template void generaVecAlAzar(vector<float> &);

template <typename Tipo>
void generaVecAlAzarCre(vector<Tipo> & v) {
Tipo ant = 0;
for(auto & ele: v){
    ele = alAzarHasta(2) + ant;
    ant = ele;
    }
}
template void generaVecAlAzarCre(vector<float> &);
template void generaVecAlAzarCre(vector<long> &);
*/
