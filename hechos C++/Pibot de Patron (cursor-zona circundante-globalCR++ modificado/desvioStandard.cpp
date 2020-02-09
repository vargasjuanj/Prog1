
#include "desvioStandard.h"
#include "promedioV.h"
#include <cmath>
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

