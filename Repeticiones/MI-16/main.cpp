#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int valor, cont=0;

    srand(time(NULL));

    do{
    valor= 1+rand()%200-101;
    if(valor>=0){
    cont++;
    }
    }while(valor>=0);


    cout<<"La cantidad de valores ingresados mayores que cero:"<<cont<<endl;
    return 0;
}
