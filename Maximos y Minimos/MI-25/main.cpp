#include <iostream>
#include <string>
#include <conio.h>


using namespace std;




int main()
{
    int M;
    int contador_ceros;
    int contador_negros;
    int mayor_rep ;
    int rep_act;
    int resguardo;
    int combi;
    int docenas;
    int mayor_docenas;


    cout<<"Ingrese la cantidad de pares que va a ingresar: ";
    cin>>M;

    int resguardos[M];
    string colores[M];
    int numeros [M];


    //Esto es basicamente la carga de los datos
    for (int i = 0; i< M; i ++){
        cout<<"Ingrese el color del par "<<i+1<<" : ";
        cin>>colores[i];

        cout<<"Ingrese el numero del par "<<i+1<<" : ";
        cin>>numeros[i];

    }

    contador_ceros = 0;
    contador_negros = 0;
    mayor_rep =1;
    rep_act =1;
    combi = 0;
    docenas = 0;
    mayor_docenas =0;

    //Con un ciclo es suficiente para hacer los 5 puntos requeridos
    for(int i = 0; i< M; i++){
            //Item a
            if (numeros[i] == 0){
                if(i>0){
                    resguardos[contador_ceros] = numeros[i-1];
                    contador_ceros++;
                }
            }

            //Item b
            if(colores[i] == "negro"){
                contador_negros++;
            }

            if((numeros[i]<13) || (numeros[i] > 24)){
                docenas++;
                if(docenas > mayor_docenas){
                    mayor_docenas = docenas;
                }else{
                    docenas = 0;
                }
            }

    }

    for (int i = 0; i< M -1 ; i++){

            //Item c
            if(numeros[i] == numeros[i+1]){
                rep_act++;
                if(rep_act > mayor_rep ){
                    mayor_rep = rep_act;
                    resguardo = numeros[i];
                }
            }else{
                rep_act = 1;
            }

            //Item d
            if(colores[i] == "rojo"){
                if(colores[i+1] == "negro"){
                    combi++;
                }
            }
    }
    //Respuestas ITEM A
    cout<<"La cantidad de veces que salio el cero fue: "<<contador_ceros<<endl;
    cout<<"Y los numeros anteriores al cero fueron "<<endl;
    for(int i=0; i<contador_ceros; i++){
        cout<<resguardos[i];
        if(i < contador_ceros - 1){
            cout<<"-";
        }
    }
    cout<<"\n";
    //Respuesta ITEM B
    cout<<"La cantidad de veces que llego a repetirse el color negro fueron: "<<contador_negros<<endl;
    //Respuesta ITEM C
    cout<<"El numero que mas se repitio fue el: "<<resguardo<<" y se repitio "<<mayor_rep<<" veces"<<endl;
   //Respuesta ITEM D
    cout<<"El mayor numero de veces seguidas que salieron alternador el rojo y negro fueron: "<<combi<<endl;
   //Respuesta ITEM E
    cout<<"El mayor numero de veces que se nego la docena fue: "<<mayor_docenas<<endl;

    return 0;
}
