/*
Dada una serie de números enteros, informar:
a) su factorial
b) cuantos múltiplos de 3
c) cuantos múltiplos de 5
d) cuantos múltiplos de 3 y de 5
Utilice las funciones de ejercicios anteriores.
*/
#include <iostream>
#include <conio.h>

using namespace std;

int factorial (int numero){
    int factorial=1;
    if(numero > 0){
        while(numero > 0){
            factorial*=numero;
            numero--;
        }
    }
    return factorial;
}

void contarMultiplos(int numero, int& contador3, int& contador5, int& contadorMultiplos) {
    if (numero % 3 == 0) {
        contador3++;
    }
    if (numero % 5 == 0) {
        contador5++;
    }
    if (numero % 3 == 0 && numero % 5 == 0) {
        contadorMultiplos++;
    }
}



void menu(int &opc){
    cout<<"Bienvenidos"<<endl;
    cout<<"1-Factorial"<<endl;;
    cout<<"2-Multiplos de 3"<<endl;;
    cout<<"3-Multiplos de 5"<<endl;;
    cout<<"4-Multiplos de 3 y 5"<<endl;;
    cout<<"5-Salir"<<endl;;
    cout<<"Elija una opcion: ";
    cin>>opc;
}






int main()
{
    int numero, contador3 = 0, contador5=0, contadorMultiplos=0, fact=0, opc;
    cout<<"Ingrese un numero entero positivo: "; cin>>numero;
    while(numero > 0){
        fact = factorial(numero);
        contarMultiplos(numero, contador3, contador5, contadorMultiplos);

        //Esta parte muestra los resultados
        menu(opc);
        switch(opc){
          case 1: cout<<numero<<"!"<<"= "<<fact<<endl;break;
          case 2: cout<<"La cantidad de multiplos de 3: "<<contador3<<endl;break;
          case 3: cout<<"La cantidad de multiplos de 5: "<<contador5<<endl;break;
          case 4: cout<<"La cantidad de multiplos de 3 y 5"<<contadorMultiplos<<endl;break;
          case 5: cout<<"Adios...";break;
        }
        cout<<"Ingrese nuevamente un numero: ";
        cin>>numero;
        fact = 0;
    }
    return 0;
}
