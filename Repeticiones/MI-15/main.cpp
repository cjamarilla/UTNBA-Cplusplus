/*
Se realiza una inspección en una fábrica de pinturas, y se detectaron 20
infracciones. De cada infracción se tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
-Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
-La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4
con gravedad “G” sean
mayor a 3.*/
#include <iostream>


using namespace std;

int main()
{
    int tipo, valorMulta, totL=0, totM=0, totG=0, cont3=0, cont4=0;
    char motivo[40];
    char gravedad;

    for(int i=0; i<20; i++){
    cout<<"Infraccion Nro "<<i+1<<endl;
    cout<<"Ingrese el tipo de infraccion [1,2,3,4]: ";
    cin>>tipo;
    cin.ignore();
    cout<<"Cual es el motivo de la multa: ";
    cin.getline(motivo, 40, '\n');
    cout<<"Monto a pagar: ";
    cin>>valorMulta;
    cout<<"Ingrese la gravedad de infraccion[L,M,G]: ";
    cin>>gravedad;

    switch(gravedad){
    case 'L': totL+=valorMulta;break;
    case 'M': totM+=valorMulta;break;
    case 'G': if(tipo == 3){
                 cont3++;
                 }
              if(tipo == 4){
                cont4++;
              }
              totG+=valorMulta;break;

    default: cout<<"opcion invalidad";break;
    }

    }

    if((cont3 > 3) &&  (cont4>3)){
        cout<<"CLAUSURAR FABRICA"<<endl;
    }

    cout<<"A continuacion los montos totales para cada infracciones..."<<endl;
    cout<<"El total para el tipo L: "<<totL<<"$"<<endl;
    cout<<"El total para el tipo M: "<<totM<<"$"<<endl;
    cout<<"El total para el tipo G: "<<totG<<"$"<<endl;



    return 0;
}
