#include <iostream>

using namespace std;

int main()
{
    int a,b,suma=0;
    cout<<"Ingrese el valor de a : "; cin>>a;
    cout<<"Ingrese el valor de b: "; cin>>b;
    while(b>0){
        suma+=a;
        b--;
    }
    cout<<"El resultado es: "<<suma<<endl;
    return 0;
}
