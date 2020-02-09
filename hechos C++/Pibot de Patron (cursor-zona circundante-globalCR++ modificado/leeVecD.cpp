#include "leeVecD.h"
#include <iostream>
using namespace std;
template <typename Tipo>
void leeMatD(int cF,int cC, vector<vector<Tipo>> & v) {
Tipo i,valor;
vector<Tipo> fila(cC);
for(i=0;i<cC;i++){
    leeVecD(fila);
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
void leeVecD(vector<Tipo> & v) {
for(auto & ele: v){
    cout <<"Valor:"; cin>>ele;
    }
}
template void leeVecD(vector<float> &);
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
