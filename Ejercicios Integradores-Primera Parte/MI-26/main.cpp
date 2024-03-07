#include <iostream>
#include <string>
#include <cfloat>


using namespace std;

struct Contenedor{
    string identificador;
    float peso;
    int puerto;
};

int main()
{
    Contenedor contenedor[3];
    float pesoTotal= 0.0;
    float pesoMayor= FLT_MIN;
    string resguardo;
    int p1=0, p2=0, p3=0;

    for(int i=0; i<3; i++){
        cout<<"---Contenedor Nro-"<<i+1<<endl;
        cout<<"Ingrese la indentificacion del contenedor: ";
        cin>>contenedor[i].identificador;
        cout<<"Ingrese el peso: ";
        cin>>contenedor[i].peso;
        cout<<"Ingrese a que tipo de puerto va [1,2 o 3]: ";
        cin>>contenedor[i].puerto;

        while((contenedor[i].puerto <1) || (contenedor[i].puerto >3)){
            cout<<"ERROR-Ingrese formato requerido"<<endl;
            cout<<"Ingrese a que tipo de puerto va [1,2 o 3]: ";
            cin>>contenedor[i].puerto;

        }
    }

    for(int i=0; i<3; i++){
            //Parte 1
        pesoTotal+= contenedor[i].peso;
            //Parte 2
        if(contenedor[i].peso > pesoMayor){
            pesoMayor = contenedor[i].peso;
            resguardo = contenedor[i].identificador;
        }
            //Parte 3
        switch(contenedor[i].puerto){
            case 1:
                p1++;break;
            case 2:
                p2++;break;
            case 3:
                p3++;break;
        }

    }

    cout<<"El peso total que debe trasladar es: "<<pesoTotal<<"KG"<<endl;
    cout<<"El contendor nro "<<resguardo<<" es el mas pesado con un peso de "<<pesoMayor<<"KG"<<endl;
    cout<<"La cantidad de contenedores a cada puerto son: "<<endl;
    cout<<"Puerto 1: "<<p1<<endl;
    cout<<"Puerto 2: "<<p2<<endl;
    cout<<"Puerto 3: "<<p3<<endl;


    return 0;
}
