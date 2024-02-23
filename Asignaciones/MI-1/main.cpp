//Dados dos valores enteros A y B, informar la suma, resta y el producto.
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int num,num2,suma=0, resta=0, prod;
    cout<<"Bienvenidos..."<<endl;
    cout<<"Ingrese el valor de un numero: ";
    cin>>num;
    cout<<"Ingrese el valor de otro numero: ";
    cin>>num2;
    suma = num + num2;
    resta = num - num2;
    prod = num * num2;
    cout<<num<<" + "<<num2<<"= "<<suma<<endl;
    cout<<num<<" - "<<num2<<"= "<<resta<<endl;
    cout<<num<<" * "<<num2<<"= "<<prod<<endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}

