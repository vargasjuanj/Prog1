#include <iostream>
#include <fstream>
#include <vector>
#include "leerVar.h"
#include "leeVecD.h"
#include "muestraV.h"
#include "desvioStandard.h"
//Vargas Juan Jose
using namespace std;

int main (int argc, char *argv[]) {
int tam;
vector<vector<float>> matriz;
ifstream data("datos.txt");
data>>tam;
leeVarI(tam,3,21,"Tamaño impar: ");
leeMatD(tam,tam,matriz);
muestraV(matriz);
desvZona(matriz);
return 0;
}

