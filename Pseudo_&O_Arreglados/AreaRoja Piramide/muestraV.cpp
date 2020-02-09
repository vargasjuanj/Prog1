#include "muestraV.h"
plantilla(Tipo)
procedimiento muestraV(vectorDin(Tipo) v) {
paraCada(ele,v)
    mostrar << ele << "  ";
    finParaCada
mostrar << salto;
}
//implementa procedimiento muestraV(vectorDin(largo));
implementa procedimiento muestraV(vectorDin(real));
//implementa procedimiento muestraV(vectorDin(entero));
//implementa procedimiento muestraV(vectorDin(caracter));
//implementa procedimiento muestraV(vectorDin(cadena));

plantilla(Tipo)
procedimiento muestraV(matrizDin2D(Tipo) m) {
paraCada(v,m)
    muestraV(v);
    finParaCada
}
implementa procedimiento muestraV(matrizDin2D(real));

plantilla(Tipo)
procedimiento muestraV(entero t, Tipo v[]) {
entero ind;
variarMas1(ind,0,t-1)
    mostrar << v[ind] << "  ";
    finVariar
mostrar << salto;
}
implementa procedimiento muestraV(entero,real[]);
//implementa procedimiento muestraV(entero,entero[]);