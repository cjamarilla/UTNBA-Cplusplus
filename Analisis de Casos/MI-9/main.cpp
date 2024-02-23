/*Dado un mes y el año correspondiente informar cuantos dias tiene el mes*/
#include <iostream>

using namespace std;

int main()
{
    int mm,aaaa;
    cout<<"Ingrese el año: "; cin>>aaaa;
    cout<<"Ingrese el mes: "; cin>>mm;

    switch(mm){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:cout<<"Tiene 31 dias"<<endl;break;
    case 4:
    case 6:
    case 9:
    case 11:cout<<"Tiene 30 dias"<<endl;break;
    case 2:
            if((aaaa % 4 == 0 && aaaa % 100 != 0) || (aaaa % 400 == 0)){
            cout<<"Tiene 28 dias"<<endl;break;
            }else{
            cout<<"Tiene 27 dias"<<endl;break;
            }

    default: cout<<"Opcion invalida"<<endl;break;
}
    return 0;
}
