#ifndef FECHASTAD_H
#define FECHASTAD_H
estructura fecha {
privado:
    campo entero anio;
    campo entero mes;
    campo entero dia;
publico:
    funcion cadena textfecha();
    procedimiento leeFecha();
    funcion entero cantDias(entero,entero);
    funcion logico esBisiesto(entero);
    funcion cadena cadFecha();
    funcion logico operador ES(fecha);
    funcion logico operador NOES(fecha);
    funcion logico operador <(fecha);
    funcion logico operador <=(fecha);
    funcion logico operador >(fecha);
    funcion logico operador >=(fecha);
    procedimiento operador ++();
    procedimiento operador --();
    };
#endif