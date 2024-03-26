/*
Una bodega quiere lanzar una oferta para terminar con el stock de dos productos.
Para ello cuenta con B cantidad de cajas de vino blanco y T cantidad de cajas de vino tinto.
Desea armar la mayor cantidad posible de paquetes con la oferta y que todos los paquetes
tengan igual cantidad de cajas de vino blanco y de vino tinto.
 Se pide informar cuántos paquetes se podrán armar como máximo, y cuántas cajas de vino
blanco y cuantas de vino tinto contendrán cada uno.
Utilice la funciones desarrolladas en ejercicios anteriotes
*/
#include <iostream>
#include <conio.h>

using namespace std;

const int PAQUETE_TINTO = 2 ;
const int PAQUETE_BLANCO = 2 ;

int promo(int &blanco, int &tinto){
  int paquete = 0;
  do{

  if(blanco >=PAQUETE_BLANCO || tinto >=PAQUETE_TINTO){
    paquete++;
    blanco -= PAQUETE_BLANCO;
    tinto -= PAQUETE_TINTO;
  }
  }while(blanco >0 && tinto >0);

  return paquete;
}

int main()
{
    int cant_tinto, cant_blanco;
    cout<<"Ingrese la cantidad de cajas de vino blanco que hay en stock: "; cin>>cant_blanco;
    cout<<"Ingrese la cantidad de cajas de vino tinto que hay en estock: "; cin>>cant_tinto;
    cout<<"Las promos que se pueden armar son: "<<promo(cant_blanco, cant_tinto)<<endl;
    cout<<"Con la cantidad de vinos blancos de "<<PAQUETE_BLANCO<<endl;
    cout<<"Con la cantidad de vinos tintos de "<<PAQUETE_TINTO<<endl;

    getch();
    return 0;
}
