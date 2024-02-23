/*Dada una terna de números naturales que representan al dia, mes y al año
de una determinada fecha informarla como un solo número natural de 8 digitos
con la forma (AAAAMMDD)*/
#include <iostream>

using namespace std;

int main()
{
    int aaaa,mm,dd, fecha=0;
    cout<<"Ingrese el anio: ";
    cin>>aaaa;
    cout<<"Ingrese el mes: ";
    cin>>mm;
    cout<<"Ingree el dia: ";
    cin>>dd;

    fecha = aaaa * 10000 + mm * 100 + dd;

    cout<<"La fecha es: "<<fecha<<endl;

    return 0;
}
