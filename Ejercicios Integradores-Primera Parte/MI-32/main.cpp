#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


struct Pasajero{
  int nroPasaporte;
  float importe;
};


struct Vuelo{
  int nroVuelo;
  string destino;
  int cantidadAsientos;
  Pasajero pasajeros[5];
};


int main()
{
  int M;
  cout<<"Ingrese cuantos vuelos mensuales al exterior hay: ";
  cin>>M;

  Vuelo vuelos[M];

  float totalRecaudadoVuelo=0.0, totalRecaudadoMes=0.0;
  int totalAsientos=0, asientosLibre=0, resguardoNroVuelo, vueloMejorRecaudacion=-1;
  int contadorVuelo, contadorPasajeros=0, porcentajeLibre, porcentajeOcupado;

  //Aca trato el vuelo en general
  for (contadorVuelo=0; contadorVuelo < M; ++contadorVuelo){

    cout<<"Vuelo Nro-"<<contadorVuelo+1<<endl;
    cout<<"Ingrese el numero de vuelo: ";
    cin>>vuelos[contadorVuelo].nroVuelo;
    cout<<"Ingrese el destino: ";
    getline(cin >> ws, vuelos[contadorVuelo].destino);


    totalRecaudadoVuelo = 0.0;
    int j=0;
    //Aca trato el pasajero en general
    do{

      cout<<"Pasajero Nro-"<<contadorPasajeros+1<<endl;
      cout<<"Ingrese el numero de pasaporte: ";
      cin>>vuelos[contadorVuelo].pasajeros[j].nroPasaporte;

      if(vuelos[contadorVuelo].pasajeros[j].nroPasaporte == 0){
        break;

      }

      cout<<"Ingrese el importe del pasaje en U$S: ";
      cin>>vuelos[contadorVuelo].pasajeros[j].importe;

      totalRecaudadoVuelo+= vuelos[contadorVuelo].pasajeros[j].importe;
      ++contadorPasajeros;

      cout<<"Nro de Pasaporte: "<<vuelos[contadorVuelo].pasajeros[j].nroPasaporte<<endl;
      cout<<"Importe en U$S: "<<vuelos[contadorVuelo].pasajeros[j].importe<<endl;
      j++;
    }while(vuelos[contadorVuelo].pasajeros[j-1].nroPasaporte != 0);

    totalAsientos = vuelos[contadorVuelo].cantidadAsientos;
    asientosLibre = totalAsientos - contadorPasajeros;

    porcentajeLibre= (asientosLibre / totalAsientos) * 100;
    porcentajeOcupado = (contadorPasajeros / totalAsientos)*100;

    totalRecaudadoMes+= totalRecaudadoVuelo;

    if(totalRecaudadoVuelo > vueloMejorRecaudacion){
      vueloMejorRecaudacion = totalRecaudadoVuelo;
      resguardoNroVuelo = vuelos[contadorVuelo].nroVuelo;
    }

    cout<<"Nro de Vuelo: "<<vuelos[contadorVuelo].nroVuelo<<endl;
    cout<<"Destino : "<<vuelos[contadorVuelo].destino;
    cout<<"Porcentaje de Asientos libres es: "<<porcentajeLibre<<"%"<<endl;
    cout<<"Porcentaje de Asiento Ocupado es: "<<porcentajeOcupado<<"%"<<endl;
    cout<<"Total recaudado del vuelo fue: "<<totalRecaudadoVuelo<<"U$S"<<endl;
  }

    cout<<"El total recaudado en el mes fue: "<<totalRecaudadoMes<<endl;
    cout<<"Cantidad de vuelos completados fueron: "<<contadorVuelo<<endl;
    cout<<"El vuelo "<<resguardoNroVuelo<<" fue el que mas recaudo con un importe "<<vueloMejorRecaudacion<<endl;

    getch();
    return 0;
}
