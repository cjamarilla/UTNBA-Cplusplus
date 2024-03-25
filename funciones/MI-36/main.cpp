/*
Dada la fracci�n P/Q, para P y Q naturales informar la mayor cantidad de
simplificaciones.
Desarrolle y utilice una funci�n que reciba dos n�meros naturales y retorne el
menor factor com�n.
Ej: 360/60 = 180/30 = 90/15 = 30/5 = 6/1

*/
#include <conio.h>
#include <iostream>

using namespace std;

//Algoritmo de Euclides
int MCD(int a, int b){
  while(b != 0){
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}



void simplificaciones(int &p, int &q){
  int mcd = MCD(p, q);

  p /= mcd;
  q /= mcd;
}



int main()
{
    int p,q;
    cout<<"Ingrese el valor de p: "; cin>>p;
    cout<<"Ingrese el valor de q: "; cin>>q;

    cout<<"Fraccion original: "<<p<<"/"<<q<<endl;

    simplificaciones(p,q);

    cout<<"Fraccion reducida: "<<p<<"/"<<q<<endl;
    getch();
    return 0;
}
