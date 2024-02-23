#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int aleatorio,aux=0, cont_mayores=0, suma = 0;
    float promedio;

    //Arrancamos la semilla
    srand(time(NULL));

    for(int i=0; i<50; i++){
        aleatorio= rand()%301-100;
        if(aleatorio>100){
            aux+= aleatorio;
            cont_mayores++;
        }
        if(aleatorio<-10){
            suma+=aleatorio;
        }

    }
     // Verificar si cont_mayores es diferente de cero antes de calcular el promedio
    if(cont_mayores != 0) {
    promedio = static_cast<float>(aux) / cont_mayores;
    cout << "El promedio de los mayores que 100 es: " << promedio << endl;
    }else {
    cout << "No hay números mayores que 100 para calcular el promedio." << endl;
    }
    cout << "La suma de los menores que -10 es: " << suma << endl;

    return 0;
}
