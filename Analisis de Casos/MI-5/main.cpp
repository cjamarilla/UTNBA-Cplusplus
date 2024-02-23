/*Dados dos valores, informar cual es el mayor
de los 2*/
#include <iostream>

using namespace std;

int main()
{
    int num,num2;
    cout<<"Ingrese 2 valores: "; cin>>num>>num2;
    if(num > num2){
    cout<<"MAYOR: "<<num;
    }else if(num < num2){
    cout<<"MAYOR: "<<num2;
    }
    return 0;
}
