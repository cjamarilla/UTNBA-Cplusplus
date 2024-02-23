/*Dado 3 valores informar si forman un triangulo*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Ingrese el valor del lado: "; cin>>a;
    cout<<"Ingrese el valor del lado: "; cin>>b;
    cout<<"Ingrese el valor del lado: "; cin>>c;

    if(((a+b)>c) && ((b+c)>a) && ((a+c)>b) ){
    cout<<"Forman un TRIANGULO"<<endl;
    }else{
    cout<<"NO Forman un TRIANGULO"<<endl;
    }
    return 0;
}
