/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Calcular las notas de un curso de hasta 25 alumnos.
*/
#include "leerVar.h"

estructura Estudiante {
    Estudiante();
    entero nroLeg;
    real exParcial;
    real exGlobal;
    real asistencia;
    estatico entero cantEstud;
    procedimiento leeDatos();
    funcion entero calculaNota();
};

procedimiento leeYCalculaNota(entero, Estudiante[]);

constante entera TAM = 25;

principal                                                       // Unidad de programa principal
Estudiante curso[TAM];
entero cantEstudiantes;
limpiar;                                                        // Limpia la pantalla.
leerVar(cantEstudiantes,1,TAM,"Cantidad de estudiantes");
leeYCalculaNota(cantEstudiantes,curso);
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

procedimiento leeYCalculaNota(entero t, Estudiante vE[]) {
entero unEstud
      ,nota;
variar(unEstud,0,t-1,1) // Bucle de lectura
    vE[unEstud].leeDatos();
    nota = vE[unEstud].calculaNota();
    mostrar << fSi(nota >= 7,"Aprobado",fSi(nota >= 4,"Recupera","Libre")) << " con:" << nota << "...\n";
    finVariar
}

entero Estudiante::cantEstud = 0;                                      // Se inicializa una variable global (para los estudiantes)

Estudiante::Estudiante() {
nroLeg = ++cantEstud;
}

procedimiento Estudiante::leeDatos() {
mostrar << "Datos del estudiante legajo NÂ° " << nroLeg << salto;
leerVar(exParcial,0.f,100.0f,"Parcial");
leerVar(exGlobal,0.f,100.0f,"Global");
leerVar(asistencia,0.f,100.0f,"Asistencia");
}

funcion entero Estudiante::calculaNota() {
entero resul;
si(asistencia >= 70.f) entonces
    resul = (exParcial * 0.3f + exGlobal * 0.7f) / 10.0f + 0.5f;
    sinoSi(asistencia >= 30.f) entonces
    resul = (exParcial * 0.3f + exGlobal * 0.7f) * ((asistencia - 30.f)/40.f)/ 10.0f + 0.5f;
    sino
    resul = 0;
    finSi
regresa(resul);
}
