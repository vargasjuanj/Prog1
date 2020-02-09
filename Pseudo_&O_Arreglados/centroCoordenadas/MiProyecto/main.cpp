#include <program1.h>
#include "intercambiar.h"
#include "coord2D.h"
#include "tam.h"
/**
*    Enunciado: Dado un vector de coordenadas bidimensionales, ordenarlo por distancia respecto del centro de coordenadas.
*/
int main(){                                                    // Unidad de programa principal
coord2D punto[TAM];
system("cls");                                                        // Limpia la pantalla.
leeVec2D(TAM,punto);
ordena(TAM,punto);
muestraVec2D(TAM,punto);
system("PAUSE");                                                          // Pausa antes de finalizar. 
}                                                    // Fin de unidad de programa principal
