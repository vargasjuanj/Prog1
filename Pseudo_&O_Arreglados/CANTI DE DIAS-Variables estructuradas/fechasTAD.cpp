#include <program1.h>
#include "fechasTAD.h"
#include "leeVar.h"
procedimiento fecha::operador ++ () {
dia++;
si(dia > cantDias(anio,mes)) entonces
    dia = 1;
    mes++;
    si(mes > 12) entonces
        mes = 1;
        anio++;
        finSi
    finSi
}

procedimiento fecha::operador -- () {
dia--;
si(dia < 1) entonces
    mes--;
    si(mes < 1) entonces
        mes = 12;
        anio--;
        finSi
    dia = cantDias(anio,mes);
    finSi
}

funcion logico fecha::operador <(fecha otraFecha) {
logico resul = anio <  otraFecha.anio O
               anio ES otraFecha.anio Y (mes <  otraFecha.mes O
                                         mes ES otraFecha.mes Y dia < otraFecha.dia);
regresa(resul);
}

funcion logico fecha::operador >(fecha otraFecha) {
logico resul = anio >  otraFecha.anio O
               anio ES otraFecha.anio Y (mes >  otraFecha.mes O
                                         mes ES otraFecha.mes Y dia > otraFecha.dia);
regresa(resul);
}

funcion logico fecha::operador <=(fecha otraFecha) {
logico resul = NO (*this > otraFecha);
regresa(resul);
}

funcion logico fecha::operador >=(fecha otraFecha) {
logico resul = NO (*this < otraFecha);
regresa(resul);
}

funcion logico fecha::operador NOES(fecha otraFecha) {
logico resul = NO (*this ES otraFecha);
regresa(resul);
}

funcion logico fecha::operador ES(fecha otraFecha) {
logico resul = anio ES otraFecha.anio Y
                mes ES otraFecha.mes  Y
                dia ES otraFecha.dia;
regresa(resul);
}

procedimiento fecha::leeFecha() {
leerM(anio,"Año:");
leeVar(mes,1,12,"Mes:");
leeVar(dia,1,cantDias(anio,mes),"Dia:");
}

funcion entero fecha::cantDias(entero a, entero m) {
entero resul;
segun(m)
    caso 1: caso 3: caso 5: caso 7: caso 8: caso 10: caso 12: resul = 31;
    otroCaso 2: resul = fSi(esBisiesto(a),29,28);
    otroCaso 4: caso 6: caso 9: caso 11: resul = 30; 
    finSegun
regresa(resul);
}

funcion logico fecha::esBisiesto(entero a) {
logico resul = esMult(a,4) Y NO esMult(a,100) O esMult(a,400);
regresa(resul);
}

funcion cadena fecha::cadFecha() {
cadena resul = aCadena(dia,"00") + "/" + aCadena(mes,"00") + "/" + aCadena(anio);
regresa(resul);
}