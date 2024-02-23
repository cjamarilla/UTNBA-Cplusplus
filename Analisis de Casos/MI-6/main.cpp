/*Pedir al usuario 2 fechas y mostrar que fecha es mas reciente*/
#include <iostream>

using namespace std;

int main()
{
    int fecha, fecha2;
    cout<<"Ingrese una fecha con el formato[AAAAMMDD]: ";cin>>fecha;
    cout<<"Ingrese una fecha con el formato[AAAAMMDD]: ";cin>>fecha2;
    if(fecha > fecha2){
    cout<<"Fecha mas reciente: "<<fecha<<endl;
    }else{
    cout<<"Fecha mas reciente: "<<fecha2<<endl;
    }
    return 0;
}
