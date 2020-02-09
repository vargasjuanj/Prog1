#include <program1.h>
/**
*    Procedimiento de lectura validada por rango (Código genérico)
*/

plantilla(Tipo)
procedimiento leerVar(Tipo porRef varALeer,Tipo vMin,Tipo vMax,cadena mens){
si(vMin <= vMax) entonces
    iterar
        leerM(varALeer,mens<<"(entre "<<vMin<<" y "<<vMax<<"): ");
        salirSi (vMin <=varALeer Y varALeer <= vMax);
        mostrar << "Valor fuera de rango..." <<salto;
        finIterar;
    sino
    leerVar(varALeer,vMax,vMin,mens);
    finSi
}

implementa procedimiento leerVar(entero porRef,entero,entero,cadena);
implementa procedimiento leerVar(real porRef,real,real,cadena);
