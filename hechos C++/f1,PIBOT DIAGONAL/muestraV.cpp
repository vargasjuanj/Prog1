#include "muestraV.h"
#include <iostream>
using namespace std;
template <typename Tipo>
void muestraV(vector<Tipo> v) {
for(auto & ele: v){
    cout << ele << "  ";
}

cout << endl;
}
template void muestraV(vector<long>);
template void muestraV(vector<float>);
template void muestraV(vector<int>);
template void muestraV(vector<char>);
template void muestraV(vector<string>);

template <typename Tipo>
void muestraV(vector<vector<Tipo>> m) {
for(auto & v : m){
    muestraV(v);
}
}
template void muestraV(vector<vector<float>>);
template void muestraV(vector<vector<int>>);

template <typename Tipo>
void muestraV(int t, Tipo v[]) {
int ind;
for(ind=0; ind<t; ind++){
    cout << v[ind] << "  ";
}
cout<<endl;
}
template void muestraV(int,float[]);
template void muestraV(int,int[]);
