#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <climits>

using namespace std;

int main(){
    int n,resg_mayor, pos_mayor, resg_menor, pos_menor, numero;
    cout<<"Ingrese la longitud del arreglo: ";
    cin>>n;
    int arr[n];

    srand(time(NULL));

    for(int i=0; i<n; i++){
        numero= rand()%100;
        arr[i]=numero;
    }

    resg_mayor=INT_MIN;
    resg_menor=INT_MAX;

    for(int i=0; i<n; i++){
        if(resg_mayor<arr[i]){
            resg_mayor= arr[i];
            pos_mayor = i;
        }
        if(resg_menor>arr[i]){
            resg_menor= arr[i];
            pos_menor= i;
        }
    }


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nEl numero mas grande es "<<resg_mayor<<" y esta en la posicion "<<pos_mayor<<endl;
    cout<<"\nEl numero mas chico es "<<resg_menor<<" y esta en la posicion "<<pos_menor<<endl;







    return 0;
}
