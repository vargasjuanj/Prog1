#include <program1.h>
#include "leeVar.h"
#include "fechasTAD.h"
#include "lapso.h"
#include "intercambiar.h"
/**
*    Enunciado: Dadas dos fechas, calcular la cantidad entera de semanas entre ellas.
*/
    
    
principal                                                       // Unidad de programa principal
lapso l;
l.leeLapso();
mostrar << "Las fechas " << fSi(l.fechasIguales(),"","no ") << "son iguales.\n";
mostrar << "Hay " << l.desdeHasta() << " entre ellas.\n";
mostrar << "Hay " << l.desdeHasta()/7 << " semanas entre ellas.\n";
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

