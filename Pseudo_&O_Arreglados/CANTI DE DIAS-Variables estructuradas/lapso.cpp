#include <program1.h>
#include "lapso.h"

procedimiento lapso::intercambiar() {
fecha z = desdeFech;
desdeFech = hastaFech;
hastaFech = z;
}

funcion entero lapso::desdeHasta() {
entero resul;
si(desdeFech < hastaFech) entonces
    resul = 0;
    fecha estaFecha = desdeFech;
    repetir 
        resul++;
        ++estaFecha;
        hasta(estaFecha ES hastaFech);
    sinoSi(desdeFech > hastaFech) entonces
    lapso alReves = *this;
    alReves.intercambiar();
    resul = -alReves.desdeHasta();
    sino                                                        // ¡Son iguales!
    resul = 0;
    finSi
regresa(resul);
}

funcion logico lapso::fechasIguales() {
logico resul = (desdeFech ES hastaFech);
regresa(resul);
}

procedimiento lapso::leeLapso() {
mostrar << "desdeFech:\n";
desdeFech.leeFecha();
mostrar << "hastaFech:\n";
hastaFech.leeFecha();
}
