#include "leerVar.h"
plantilla(Tipo)
procedimiento leeVar(Tipo porRef v,Tipo vMin, Tipo vMax,cadena mens) {
si(vMin <= vMax) entonces
    iterar
        leerM(v,mens);
        salirSi(vMin <= v Y v <= vMax);
        mostrar << "Debe estar entre " << vMin << " y " << vMax << salto;
        finIterar
    sino
    leeVar(v,vMax,vMin,mens);
    finSi
}
//implementa procedimiento leeVar(real porRef,real,real,cadena);
implementa procedimiento leeVar(entero porRef,entero,entero,cadena);

plantilla(Tipo)
procedimiento leeVarI(Tipo porRef v,Tipo vMin, Tipo vMax,cadena mens) {
repetir
    leeVar(v,vMin,vMax,mens);
    hasta(esImpar(v))
}
implementa procedimiento leeVarI(entero porRef,entero,entero,cadena);
