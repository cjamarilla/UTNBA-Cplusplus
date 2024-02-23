#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int arr[10];
    int aleatorio, maximo;

    //Inicializamos la semilla
    srand(time(NULL));

    //Cargamos el arreglo
    for(int i=0; i<10; i++){
        aleatorio = rand()%100;
        arr[i]=aleatorio;
    }

    maximo = arr[0];

    for(int i=1; i<10; i++){
        if(maximo<arr[i]){
        maximo= arr[i];
        }
    }

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nEl mas grande es: "<<maximo<<endl;

    return 0;
}
