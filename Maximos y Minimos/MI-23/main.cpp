/*
Dado un conjunto de valores, que finaliza con un valor nulo,
determinar e imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores.*/
#include <iostream>
#include <cfloat>
#include <iomanip>
#include <limits>

const float LIMITE_INF= -17.3;
const float LIMITE_SUP= 26.9;

using namespace std;

int main()
{
    float valor;
    int cont =0;
    float resg_max_neg = FLT_MAX;
    float resg_min_max = FLT_MAX;
    float resg_min_rango = FLT_MAX;
    float totalValores = 0.0;
    float sumaTotal = 0.0;


    do{
        cout<<"Ingrese un valor: ";
        cin>>valor;

        if(valor == 0){
            break;
        }

        if (cin.fail()) {
        // Manejar entrada inválida
        cin.clear(); // Limpiar el indicador de error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar la entrada inválida
        cout << "Entrada inválida. Por favor, ingrese un número." << endl;
        continue;
    }

        if(valor < 0 && valor < resg_max_neg){
            resg_max_neg = valor;
        }


        if((valor > 0) && (valor < resg_min_max)){
            resg_min_max = valor;
        }

        if((valor >= LIMITE_INF && valor <= LIMITE_SUP) && (valor < resg_min_rango)){
            resg_min_rango= valor;
        }

        sumaTotal+=valor;
        cont++;



    }while(true);

    totalValores = static_cast<float> (sumaTotal) / cont;

    if(totalValores > 0){
        cout<<"El valor maximo negativo : "<<resg_max_neg<<endl;
        cout<<"El valor minimo positivo : "<<resg_min_max<<endl;
        cout<<"El valor minimo dentro del rango: "<<resg_min_rango<<endl;
        cout<<"El promedio de todos los valores es: "<<fixed<<setprecision(2)<<totalValores<<endl;

    }else{
        cout<<"No se ingresaron valores!"<<endl;
    }

    return 0;
}


//REVISAR EL CODIGO
