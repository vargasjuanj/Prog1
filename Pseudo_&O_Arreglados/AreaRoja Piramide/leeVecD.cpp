#include "leeVecD.h"
plantilla(Tipo)
procedimiento leeVecD(entero n, vectorDin(Tipo) porRef v) {
Tipo i,valor;
variarMas1(i,1,n)
    leer(valor);
    agregaEleVDin(v,valor);
    finVariar
}
implementa procedimiento leeVecD(entero, vectorDin(largo) porRef);
implementa procedimiento leeVecD(entero, vectorDin(real) porRef);

plantilla(Tipo)
procedimiento leeVecD(vectorDin(Tipo) porRef v) {
paraCada(ele,v)
    leerM(ele,"Valor:");
    finPara
}
implementa procedimiento leeVecD(vectorDin(real) porRef);

plantilla(Tipo)
procedimiento generaVecAlAzar(vectorDin(Tipo) porRef v) {
paraCada(ele,v)
    ele = alAzarHasta(tamanio(v));
    finPara
}
implementa procedimiento generaVecAlAzar(vectorDin(real) porRef);

plantilla(Tipo)
procedimiento generaVecAlAzarCre(vectorDin(Tipo) porRef v) {
Tipo ant = 0;
paraCada(ele,v)
    ele = alAzarHasta(2) + ant;
    ant = ele;
    finPara
}
implementa procedimiento generaVecAlAzarCre(vectorDin(real) porRef);
implementa procedimiento generaVecAlAzarCre(vectorDin(largo) porRef);