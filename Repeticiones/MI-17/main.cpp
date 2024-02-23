#include <iostream>

using namespace std;

int main()
{
    float sueldo, cont_a=0, cont_b=0, cont_c=0, cont_d=0;
    do{
    cout<<"Ingrese el monto del sueldo: ";
    cin>>sueldo;
    if(sueldo < 1520){
        cont_a++;
    }else if(sueldo >= 1520 || sueldo <2780){
        cont_b++;
    }else if(sueldo >= 2780 || sueldo <5999){
        cont_c++;
    }else{
        cont_d++;
    }
    }while(sueldo !=0);

    cout<<"Empleados que ganan menos de 1520: "<<cont_a<<endl;
    cout<<"Empleados que ganan mas de 1520 y menos de 2780: "<<cont_b<<endl;
    cout<<"Empleados que ganan mas de 2780 y menos de 5999: "<<cont_c<<endl;
    cout<<"Empleados que ganan mas de 5999: "<<cont_d<<endl;
    return 0;
}
