/*
Desarrollar una función que calcule el máximo común divisor de dos números
enteros A, B con el siguiente algoritmo:
1) Dividir A por B, y calcular el resto (0 < R < B)
2) Si R = 0, el MCD es B, si no seguir en 3)
3) Reemplazar A por B, B por R, y volver al paso 1)
*/

#include <iostream>
#include <conio.h>

using namespace std;


int Mcd (int A, int B){
    int R=0;
    while(true){
    R = A % B;
    if (R == 0){
        return B;
    }
    A = B;
    B = R;
    }
}

int main()
{
    int A,B,MCM;
    cout<<"Ingrese el valor de A: ";cin>>A;
    cout<<"Ingrese el valor de B: ";cin>>B;
    MCM = Mcd(A,B);
    cout<<"El maximo comun denominador es: "<<MCM<<endl;

    getch();
    return 0;
}
