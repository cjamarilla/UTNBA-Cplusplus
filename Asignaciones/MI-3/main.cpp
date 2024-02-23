/*Dado un numero entero de la forma AAAAMMDD, que representa una fecha valida
mostrar el dia, mes y año*/
#include <iostream>

using namespace std;

int main()
{
    int aaaa,mm,dd, fecha;
    cout<<"Ingrese una fecha con el formato [AAAAMMDD]: ";
    cin>>fecha;
    aaaa= fecha / 10000;
    mm = (fecha % 10000) / 100;
    dd = fecha % 100;
    cout<<"Anio: "<<aaaa<<endl;
    cout<<"Mes: "<<mm<<endl;
    cout<<"Dia: "<<dd<<endl;

    return 0;
}
