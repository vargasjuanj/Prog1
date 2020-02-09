/*
    program1.h es el archivo de traducci�n de seudoc�digo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/

/**
*    Enunciado: Dado un conjunto de hasta 100 puntos en el espacio tridimensional, mostrar los dos más alejados entre sí.
*/
#include "leerVar.h"
#include "punto3D.h"



void encuentra2MasLejanos(int cant, Punto3D v3D[]);

const int TAM = 100000;

int main(){                                                                       // Unidad de programa principal
Punto3D vP3D [TAM];
int cantidad;
leeVar(cantidad,2,TAM,"Cantidad de puntos entre 2 y 100000: ");
int i;
for(i=0; i<cantidad;i++){
    vP3D[i].leerP3D();
}
cout << "Buscando...\n";
clock_t clic = time(nullptr); //ahora();
long int a=clic;
encuentra2MasLejanos(cantidad,vP3D);
long int b=time(nullptr);
cout << "Gastó " << time(nullptr)-clic << " clics (segundos)\n";
cout <<"clic Tiempo a: " <<a <<" Tiempo b: " <<b <<endl;
system("PAUSE");                                                                    // Pausa antes de finalizar. 
return 0;                                                                // Fin de unidad de programa principal
}
void encuentra2MasLejanos(int cant, Punto3D v3D[]) {
int p1Ml = 0
      ,p2Ml = 1
      ,p1,p2;
float estaDist
    ,distMax = v3D[0].distanciar(v3D[1]);
for(p1=0;p1<cant-1; p1++){
    for(p2=p1+1; p2<cant; p2++){
        estaDist = v3D[p1].distanciar(v3D[p2]); // Calculamos la distancia entre los puntos p1 y p2
        if(estaDist > distMax) {
            distMax = estaDist;
            p1Ml = p1;
            p2Ml = p2;
		}
	}
}
cout << "Los puntos más alejados son " << p1Ml+1 << " y " << p2Ml+1 << " (" << distMax << ")\n";

}

