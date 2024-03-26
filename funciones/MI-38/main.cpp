#include <iostream>
#include <conio.h>

using namespace std;

int GrupoEtario(int edad) {
    int grupo = -1; // Valor predeterminado para indicar que no se pudo determinar el grupo etario

    if (edad <= 14) {
        grupo = 1;
    } else if (edad <= 21) {
        grupo = 2;
    } else if (edad <= 28) {
        grupo = 3;
    } else if (edad <= 35) {
        grupo = 4;
    } else if (edad <= 42) {
        grupo = 5;
    } else if (edad <= 49) {
        grupo = 6;
    } else if (edad <= 63) {
        grupo = 7;
    } else {
        grupo = 8;
    }

    return grupo;
}


int main()
{
    int edad;
    cout<<"Ingrese su edad: "; cin>>edad;
    while(edad<=0){
      cout<<"Error, no puede ingresar una edad negativa!"<<endl;
      cout<<"Vuelva a ingresar la edad: "; cin>>edad;
    }

    if(GrupoEtario(edad) == -1){
      cout<<"Error!"<<endl;
    }else{
    cout<<"Su grupo etario es el nro: "<<GrupoEtario(edad)<<endl;
    }

    getch();
    return 0;
}
