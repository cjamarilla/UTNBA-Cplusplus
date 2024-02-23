#include <iostream>

using namespace std;

int main()
{
    int valor, finalizacion, producto=1;
    cout<<"ingrese un valor: ";
    cin>>valor;
    cout<<"Ingrese longitud: ";
    cin>>finalizacion;

    for(int i=1; i<finalizacion; i++){
        producto*= i;
        if((producto%3 ==0) && (producto%5 !=0)){
        cout<<producto<<" - ";
        }
    }
    return 0;
}
