
#include <vector>
using namespace std;
/* 
    Módulo de cálculo de promedio de vectores
*/

float promedioV(int t, float v[]) {
float suma = 0.0;
int i;
for(i=0; i<t; i++){
    suma += v[i];
}
return (suma/t);
}

template <typename Tipo>
Tipo promedioV(vector<Tipo> v) {
Tipo suma = 0.0;
int i, t = v.size();
for(i=0; i<t; i++){
    suma += v[i];
}
return (suma/t);
}
template float promedioV(vector<float>);
