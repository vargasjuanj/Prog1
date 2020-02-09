#ifndef LAPSO_H
#define LAPSO_H
#include "fechasTAD.h"
estructura lapso {
privado:
    campo fecha desdeFech;
    campo fecha hastaFech;
publico:
    procedimiento leeLapso();
    logico fechasIguales();
    funcion entero desdeHasta();
    procedimiento intercambiar();
    };

#endif