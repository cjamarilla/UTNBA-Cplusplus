/*Dado un triangulo representado por sus lados, L1,L2,L3,
determinar e imprimir una leyenda segun sea, equilatero,
isoceles o escaleno*/
#include <iostream>

using namespace std;

int main()
{
    int l1,l2,l3;
    cout<<"Ingrese el valor del lado 1: "; cin>>l1;
    cout<<"Ingrese el valor del lado 2: "; cin>>l2;
    cout<<"Ingrese el valor del lado 3: "; cin>>l3;
    if(l1 == l2 || l2 == l3 || l1 == l3){
        cout<<"Es un triangulo ISOCELES"<<endl;
    }else if(l1 == l2 && l1 == l3 ){
        cout<<"Es un triangulo EQUILATERO"<<endl;
    }else{
        cout<<"Es un triangulo ESCALENO"<<endl;
    }

    return 0;
}
