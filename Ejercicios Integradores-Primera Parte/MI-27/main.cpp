/*
En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de
todos contra todos. Por cada partido disputado por un equipo se dispone de la siguiente
información:
a) Nro. de equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:
Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si
empata).*/
#include <iostream>


using namespace std;

struct Equipo{
    int nroEquipo;
    char codigo;
};

struct Lote{
    int nroEquipo;
    int puntaje;
};

int main()
{
    int K;
    cout<<"Ingrese cuantos equipos se van a ingresar : ";
    cin>>K;
    Equipo equipo[K];
    Lote lote[K];

    for(int i=0; i<K; i++){
        cout<<"***Equipo Nro-"<<i+1<<"***"<<endl;
        cout<<"Ingrese el numero de equipo: ";
        cin>>equipo[i].nroEquipo;
        cout<<"Ingrese el resultado[P(perdido)/E(empatado)/G(Ganado)]: ";
        cin>>equipo[i].codigo;
    }

    for(int i=0; i<K; i++){
        lote[i].nroEquipo = equipo[i].nroEquipo;
        switch(equipo[i].codigo){
        case 'G':
            lote[i].puntaje = 3; break;
        case 'E':
            lote[i].puntaje = 1; break;
        case 'P':
            lote[i].puntaje =-3;break;
        }
    }

    for(int i=0; i<K; i++){
        cout<<"****Equipo Nro-"<<i+1<<"***"<<endl;
        cout<<"Equipo nro: "<<lote[i].nroEquipo<<endl;
        cout<<"Puntaje: "<<lote[i].puntaje<<endl;
        cout<<"----------------------------"<<endl;
    }



    return 0;
}
