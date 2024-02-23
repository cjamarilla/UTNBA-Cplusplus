/*Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que
finaliza con un Nombre = ‘FIN’,
 informar el nombre de la persona con mayor edad y el de la
más joven*/
#include <iostream>
#include <climits>
#include <cstring>
#include <limits>

using namespace std;

int main(){
    char nombre[20];
    char resguardo_menor[40]="";
    char resguardo_mayor[40]="";
    int fecha, fecha_menor, fecha_mayor;
    char bandera = 'F';

    fecha_mayor= INT_MIN;
    fecha_menor= INT_MAX;

                                        //19960922 > -99999999999
        while(bandera != 'V'){

        cout<<"Ingrese el nombre: ";
        cin>>nombre;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if(strcmp(nombre,"FIN") == 0 || strcmp(nombre,"fin")==0){
            bandera = 'V';
            break;
        }

        cout<<"Ingrese la fecha de nacimiento con el formato[AAAAMMDD]: ";
        cin>>fecha;

        if(fecha > fecha_mayor){
            fecha_mayor= fecha;
            strcpy(resguardo_mayor,nombre);
        }

        if(fecha < fecha_menor){
            fecha_menor = fecha;
            strcpy(resguardo_menor,nombre);
        }
    }


    cout<<"Persona mayor: "<<resguardo_menor<<" su fecha es: "<<fecha_menor<<endl;
    cout<<"Persona menor: "<<resguardo_mayor<<" su fecha es: "<<fecha_mayor<<endl;

    return 0;

}
