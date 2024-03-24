/*
Desarrollar una función tal que dado un número entero positivo calcule y retorne
su factorial.
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


int main()
{
    int numero;
    cout<<"Ingrese un numero: ";cin>>numero;
    cout<<"Su factorial es: "<<factorial(numero)<<endl;
    getch();
    return 0;
}
