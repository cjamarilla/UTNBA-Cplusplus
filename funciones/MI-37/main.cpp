/*
Desarrolle la función
float CalcularPorcentajeDiferencia(int A ,int B)
que recibe dos valores y retorne el siguiente cálculo: (B-A) *100 / (A+B)
*/

#include <conio.h>
#include <iostream>

using namespace std;

float CalcularPorcentajeDiferencial (int a, int b){
  return (b -a) * 100 / (a+b);

}

int main()
{
    float a,b, dato;
    cout<<"Ingrese el valor de a: "; cin>>a;
    cout<<"Ingrese el valor de b: "; cin>>b;
    dato = CalcularPorcentajeDiferencial(a,b);
    cout<<"El resultado es: "<<dato<<endl;
    getch();
    return 0;
}
