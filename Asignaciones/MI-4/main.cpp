/*A partir de un valor entero ingresado por teclado, se pide informar :
a) La quinta parte de dicho valor
b) El resto de la division por 5
c) La septima parte del resultado del punta a)
*/
#include <iostream>

using namespace std;

void menu(int &opc) {
    cout << "Operaciones Disponibles..." << endl;
    cout << "1- La quinta parte de un numero" << endl;
    cout << "2- El resto de dividir un numero por 5" << endl;
    cout << "3- Septima parte del resultado del punto 1" << endl;
    cout << "Por favor elija una opcion: ";
    cin >> opc;
}

int QuintaParte(int numero) {
    return numero / 5;
}

int Resto(int numero) {
    return numero % 5;
}

int SeptimaParte(int quinta) {
    return quinta / 7;
}

int main() {
    char continuar;
    int numero;

    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        do {
            int opc;
            menu(opc);

            while (opc < 1 || opc > 3) {
                cout << "A continuación se le volverá a pedir una opción VALIDA..." << endl;
                menu(opc);
            }

            switch (opc) {
                case 1:
                    cout << "La quinta parte del numero " << numero << " es: " << QuintaParte(numero) << endl;
                    break;
                case 2:
                    cout << "El resto de dividir el numero " << numero << " es: " << Resto(numero) << endl;
                    break;
                case 3:
                    cout << "La septima parte de " << QuintaParte(numero) << " es: " << SeptimaParte(QuintaParte(numero)) << endl;
                    break;
                default:
                    cout << "Opción incorrecta" << endl;
                    break;
            }

            cout << "Desea realizar otra operacion con el mismo numero [s/n]: ";
            cin >> continuar;

        } while (continuar == 's' || continuar == 'S');

        cout << "Desea ingresar un nuevo numero [s/n]: ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
