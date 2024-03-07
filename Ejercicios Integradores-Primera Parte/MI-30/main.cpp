/*
Dado un conjunto de valores enteros, calcular e informar:
a) cuántos valores cero
hubo
b) promedio de valores positivos
c) sumatoria de valores negativos.

Resolver el ejercicio para los siguientes lotes de datos:
1) 167 valores enteros
2) N valores, donde el valor de N debe ser leído previamente
3) El conjunto de valores termina con un valor igual al anterior
4) Se dan N valores, pero el proceso deberá finalizar si se procesan todos los valores o si
la cantidad de ceros supera a cuatro
5) Se dan N valores, pero el proceso deberá finalizar si se cumple alguna de las
condiciones de 4) o si el promedio de positivos resulta mayor que seis.


*/
#include <iostream>

using namespace std;

int main()
{
    int longitud;
    int suma = 0;
    float promedio = 0.0;
    int cont =0;
    int sumatorioN = 0;
    int ceros = 0;

    cout<<"Ingrese la longitud : ";
    cin>>longitud;
    int arr[longitud];


    for(int i=0; i<longitud; i++){
        cout<<"Valor "<<i+1<<" :";
        cin>>arr[i];


        if(arr[i-1]== arr[i]){
            cout<<"Se encontro COINCIDENCIA..."<<endl;
            return 0;
        }

    }

    for(int i=0; i<longitud; i++){
        if(arr[i]==0){
            ceros++;
        }

        if(ceros > 4){
            return 0;
        }

        if(arr[i]>0){
            suma+=arr[i];
            cont++;
        }

        if(arr[i]<0){
            sumatorioN+= arr[i];
        }

    }

    promedio = suma / cont;
    cout<<"Cantidad de ceros: "<<ceros<<endl;
    cout<<"Promedio de valores positivos: "<<promedio<<endl;
    cout<<"Sumatoria valores negativos: "<<sumatorioN<<endl;
    return 0;
}
