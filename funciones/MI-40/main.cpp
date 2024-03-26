/*
 Desarrollar el procedimiento
 string Tendencia(int A, int B)
que dados dos valores A y B, retorne una cadena de acuerdo al siguiente cuadro:
B - A < 0 Decreciente
B - A < 2% de A Estable
B - A < 5% de A Leve ascenso
Resto En ascenso
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string Tendencia (int a, int b){
  float porcent2 = 0.0;
  float porcent5 = 0.0;

  porcent2 = 0.02 * a;
  porcent5 = 0.05 * a;

  if  (b - a < 0){
    return "Decreciente";
  } else if(b - a < porcent2){
    return "Estable";
  } else if(b - a < porcent5){
    return "Leve ascenso";
  }else{
    return "En ascenso";
  }
}

int main()
{
    int a, b;
    cout<<"Ingrese el valor de a: "; cin>>a;
    cout<<"Ingrese el valor de b: "; cin>>b;
    cout<<"La tendencia es: "<<Tendencia(a,b);

    getch();
    return 0;
}
