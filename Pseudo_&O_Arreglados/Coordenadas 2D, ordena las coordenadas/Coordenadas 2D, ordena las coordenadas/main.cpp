
#include "intercambiar.h"
#include "coord2D.h"
#include "tam.h"
/**
*    Enunciado: Dado un vector de coordenadas bidimensionales, ordenarlo por distancia respecto del centro de coordenadas.
*/
int main(int argc, char *argv[]) {                                               // Unidad de programa principal
coord2D punto[TAM];
system("cls");                                                       // Limpia la pantalla.
leeVec2D(TAM,punto);
ordena(TAM,punto);
muestraVec2D(TAM,punto);
system("PAUSA");                                                         // Pausa antes de finalizar. 
return 0;
}// Fin de unidad de programa principal
