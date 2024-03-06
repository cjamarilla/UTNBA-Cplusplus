/*
Se dispone de un lote de valores enteros positivos que finaliza con un número
negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que
determine e informe:
a) por cada sublote el promedio de valores
b) el total de sublotes procesados
c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición
relativa del mismo dentro del sublote
d) valor mínimo de cada sublote
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno,
varios o todos los
sublotes vacíos (ceros consecutivos)
*/

#include <iostream>
#include <climits>
#include <limits>

using namespace std;



int main(){

    int numeros, next;
    int cont=0, contSL = 0;
    int v_max = INT_MIN;
    int v_min = INT_MAX;
    int resg_lote=0, resg_pos=0;
    float promedio = 0.0;
    int suma = 0;
    bool loteVacio = true;

    cout<<"Ingrese un numero: ";
    cin>>numeros;

    do{

        if(numeros < 0){
        break;
        }

        loteVacio = false;

        //Este bucle trata el sublote
        do{
            //Ejemplo 0....
            //Verifica la condicion de sublote vacio
            if(numeros == 0){
                cout<<"Ingrese el numero siguiente: ";
                cin>>next;
                //Ejemplo 00.....
                if((numeros == 0) && (next == 0)){
                    continue;
                }
                }else{
                suma+= numeros;
                cont++;//Este contador simula la posicion del sublote como si fuera un arreglo

                if(numeros > v_max){
                    v_max= numeros;
                    resg_pos = cont;
                    resg_lote = contSL;
                }

                if(numeros < v_min){
                    v_min= numeros;
                }
                cout<<"Ingrese otro numero: ";
                cin>>numeros;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }while(numeros > 0);
        //Ejemplo : 1234 0 1234 0 00vacio 1234 0 .... -1 fin tambien -1 00000000000
        if(cont>0){
            promedio = static_cast<float>(suma)/cont;
            cout<<"El valor promedio del lote "<<contSL<<" es: "<<promedio<<endl;
            cout<<"El valor minimo: "<<v_min<<endl;
        }else{
            cout<<"El sublote "<<contSL<< " esta vacio."<<endl;
            cout<<"No hay valor minimo SUBLOTE VACIO."<<endl;
        }

        contSL++;//Este contador me cuenta los sublotes que haya
        cont= 0;
        suma= 0;
        promedio = 0.0;
        next=0;


    }while(numeros >= 0);



    if(loteVacio){
        cout<<"LOTE VACIO"<<endl;
    }else{
        cout<<"El total de sublotes procesados es : "<<contSL<<endl;
        cout<<"Valor maximo: "<<v_max<<" en la posicion "<<resg_pos<<" y el nro de lote: "<<resg_lote<<endl;
        cout<<"El valor minimo : "<<v_min<<endl;
    }

    return 0;
}

