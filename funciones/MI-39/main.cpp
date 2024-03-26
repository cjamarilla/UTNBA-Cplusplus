/*
Desarrollar un procedimiento tal que dada una hora (HHMMSS) y un tiempo
también en formato HHMMSS devuelva la nueva hora que surge de sumar el tiempo a la hora
inicial, considere también si cambió el día.

*/
#include <conio.h>
#include <iostream>

using namespace std;

void modificarHora(int horas, int minutos, int segundos, int &hh, int &mm, int &ss, int &dias){
  dias=0;
  ss+=segundos;
  mm+=minutos;
  hh+=horas;

  if(hh > 24){
    hh-=24;
    dias++;
  }
  if(mm > 60){
    mm-=60;
    hh++;
  }
  if(ss > 60){
    ss-=60;
    mm++;
  }
}


void pedirHora(int &hh, int &mm, int &ss) {
    do {
        cout<<"Ingrese la hora: ";
        cin>>hh;
        cout<<"Ingrese los minutos: ";
        cin>>mm;
        cout<<"Ingrese los segundos: ";
        cin>>ss;
        if (hh < 0 || hh > 24 || mm < 0 || mm > 60 || ss < 0 || ss > 60) {
            cout << "Error, respete el formato - [horas: 24 / minutos: 60 / segundos: 60]" << endl;
        }
    } while (hh < 0 || hh > 24 || mm < 0 || mm > 60 || ss < 0 || ss > 60);
}


int main()
{
    int horas, minutos, segundos, hh, mm, ss, dias;

    cout<<"A continuacion, se le pedira la hora inicial"<<endl;
    pedirHora(hh,mm,ss);
    cout<<"A continuacion se le pedira un hora a ingresar"<<endl;
    pedirHora(horas,minutos,segundos);
    cout<<"--------------------------------------------"<<endl;
    cout<<"Hora inicial ---> "<<hh<<":"<<mm<<":"<<ss<<endl;
    cout<<"Hora ingresada --> "<<horas<<":"<<minutos<<":"<<segundos<<endl;
    cout<<"--------------------------------------------"<<endl;
    modificarHora(horas,minutos,segundos,hh,mm,ss,dias);
    cout<<"Hora nueva --> "<<hh<<":"<<mm<<":"<<ss<<endl;
    if(dias >0){
      cout<<"Dias: "<<dias<<endl;
    }

    getch();
    return 0;
}
