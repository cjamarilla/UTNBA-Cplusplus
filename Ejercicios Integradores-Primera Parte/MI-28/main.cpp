/*
Dada una serie de caracteres que conforman una oración, donde cada palabra está
separada de la siguiente por un carácter blanco y la oración finaliza con un punto.
Se pide
informar:
a) cantidad de veces que apareció cada vocal
b) cantidad de palabras que contiene la oración
c) cantidad de letras que posee la palabra más larga.
*/

#include <iostream>
#include <cctype>


using namespace std;



int main()
{
    const int LONGITUD = 100;
    char palabra[LONGITUD];
    int vocalA, vocalE, vocalI, vocalO, vocalU, contPalabra, contLetras_act, contLetras_max;
    bool dentroPalabra = false;

    cout<<"Ingrese la oracion: ";
    cin.getline(palabra, LONGITUD, '.');

    vocalA = 0;
    vocalE = 0;
    vocalI = 0;
    vocalO = 0;
    vocalU = 0;
    contPalabra = 0;
    contLetras_act = 0;
    contLetras_max = 0;

    for(int i=0; palabra[i]!='\0'; i++){
        switch(tolower(palabra[i])){
            case 'a': vocalA++;break;
            case 'e': vocalE++;break;
            case 'i': vocalI++;break;
            case 'o': vocalO++;break;
            case 'u': vocalU++;break;
            default: break;
        }

        if (!isspace(palabra[i])) {
            contLetras_act++;
            dentroPalabra = true;
        } else if (dentroPalabra) {
            contPalabra++;
            dentroPalabra = false;
            if (contLetras_act > contLetras_max) {
                contLetras_max = contLetras_act;
            }
            contLetras_act = 0;
        }

        if (dentroPalabra) {
        contPalabra++;
        if (contLetras_act > contLetras_max) {
            contLetras_max = contLetras_act;
        }
    }

    }



    cout<<"a) Cantidad de veces que aparecio cada vocal"<<endl;
    cout<<"a: "<<vocalA<<endl;
    cout<<"e: "<<vocalE<<endl;
    cout<<"i: "<<vocalI<<endl;
    cout<<"o: "<<vocalO<<endl;
    cout<<"u: "<<vocalU<<endl;
    cout<<"b) cantidad de letras que contiene la oracion: "<<contPalabra<<endl;
    cout<<"c) Cantidad de letras que posee la palabra mas larga: "<<contLetras_max<<endl;

    return 0;
}
