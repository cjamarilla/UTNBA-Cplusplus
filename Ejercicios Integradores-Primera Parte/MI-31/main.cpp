/*
#include <iostream>
#include <string>

using namespace std;

const int MAXIMO_FAMILIAS = 5;
const int MAXIMO_HABITANTES = 10;


struct Persona{
    string nombreCompleto;
    int edad;
    char sexo;
    char estudios;
    char indicador;
};

struct Familia{
    string domicilio;
    char tipoVivienda;
    int cantidad_habitantes;
    Persona personas[MAXIMO_HABITANTES];
};



int main()
{
    Familia familias[MAXIMO_FAMILIAS];

    int cantidadFamilias = 0;
    int porcentaje, total=0, analfabetos=0; //Para el item b
    string resguardo; //Item c
    float promedioFlia, promedioCiudad;
    int contador, sumaFlia, sumaCuidad; //Item d
    int contN=0, contP=0, contS=0, contT=0, contU=0;  //Item e
    float porcentajeFem, porcentajeMas;
    int contF=0, contM=0;

    do{
        cout<<"Familia NRO-"<<cantidadFamilias+1<<endl;
        cout<<"Ingrese el domicilio: ";
        getline(cin >> ws,familias[cantidadFamilias].domicilio);

        if(familias[cantidadFamilias].cantidad_habitantes == 0){
          break;
        }

        cout<<"Ingrese el tipo de vivienda donde vive[C(casa)/D(departamento)]: ";
        cin>>familias[cantidadFamilias].tipoVivienda;

        cout<<"Ingrese la cantidad de habitantes: ";
        cin>>familias[cantidadFamilias].habitantes;

        for(int i=0; i< familias[cantidadFamilias].cantidad_habitantes ; i++){
            cout<<"Habitante de la familia Nro-"<<i+1<<endl;

            cout<<"Ingrese el nombre completo: ";
            cin.ignore();
            getline(cin >> ws, familias[cantidadFamilias].personas[i].nombreCompleto);

            cout<<"Edad: ";
            cin>>familias[cantidadFamilias].personas[i].edad;

            sumaFlia+= familias[cantidadFamilias].personas[i].edad;

            cout<<"Ingrese el sexo[F(femenino)/M(masculino)]: ";
            cin>>familias[cantidadFamilias].personas[i].sexo;

            if(familias[cantidadFamilias].personas[i].sexo == 'F'){
              contF++;
            }else if (familias[cantidadFamilias].personas[i].sexo == 'M'){
              contM++;
            }

            cout<<"Ingrese Nivel de estudios alcanzados[N(no posee)/P(primario)/S(secundario)/T(terciaro)/U(universitario): ";
            cin>>familias[cantidadFamilias].personas[i].estudios;

            switch(familias[cantidadFamilias].personas[i].estudios){
              case 'N': contN++;break;
              case 'P': contP++;break;
              case 'S': contS++;break;
              case 'T': contT++;break;
              case 'U': contU++;break;
            }

            cout<<"Ingrese estado del estudio[I(incompleto)/C(completo)]: ";
            cin>>familias[cantidadFamilias].personas[i].indicador;

            if(familias[cantidadFamilias].personas[i].edad >10 && familias[cantidadFamilias].personas[i].estudios == 'N'){
              analfabetos++;
            }

            total++;

        }

        promedioFlia = sumaFlia / familias[cantidadFamilias].cantidad_habitantes;
        cout<<"Edad promedio de la familia: "<<promedioFlia<<endl;

        promedioCiudad+= promedioFlia;
        cantFamilias++;

    }while(cantidadFamilias < MAXIMO_FAMILIAS && familias[i].cantidad_habitantes == 0);

    if(total > 0){
      promedioCiudad /= total;
      cout<<"Edad promedio de la cuidad: "<<promedioCiudad<<endl;
    }else{
      cout<<"No se ingresaron familias"<<endl;
    }

    cout<<"Nivel de Estudio de Habitantes"<<endl;
    cout<<"N: "<<contN<<endl;
    cout<<"P: "<<contP<<endl;
    cout<<"S: "<<contS<<endl;
    cout<<"T: "<<contT<<endl;
    cout<<"U: "<<contU<<endl;

    porcentajeFem = ( contF / total ) * 100;
    porcentajeMas= (contM / total) * 100;

    cout<<"Porcentaje de encuestados Femeninos : "<<porcentajeFem<<"%"<<endl;
    cout<<"Porcentaje de encuestados Masculinos: "<<porcentajeMas<<"%"<<endl;

    porcentaje = (analfabetos / total) * 100;

    cout<<"Porcentaje de analfabetos en la cuidad: "<<porcentaje<<"%"<<endl;


    return 0;
}
*/

#include <iostream>
#include <string>

using namespace std;

const int MAXIMO_FAMILIAS = 5;
const int MAXIMO_HABITANTES = 10;

struct Persona {
    string nombreCompleto;
    int edad;
    char sexo;
    char estudios;
    char indicador;
};

struct Familia {
    string domicilio;
    char tipoVivienda;
    int cantidad_habitantes;
    Persona personas[MAXIMO_HABITANTES];
};

int main() {
    Familia familias[MAXIMO_FAMILIAS];

    int cantidadFamilias = 0;
    int porcentaje, total = 0, analfabetos = 0; // Para el item b
    float promedioFlia = 0, promedioCiudad = 0;
    int sumaFlia = 0, sumaCiudad = 0; // Item d
    int contN = 0, contP = 0, contS = 0, contT = 0, contU = 0;  // Item e
    float porcentajeFem = 0, porcentajeMas = 0;
    int contF = 0, contM = 0;

    do {
        cout << "Familia NRO-" << cantidadFamilias + 1 << endl;

        cout << "Ingrese el domicilio: ";
        getline(cin >> ws, familias[cantidadFamilias].domicilio);

        if (familias[cantidadFamilias].cantidad_habitantes == 0) {
            break;
        }

        cout << "Ingrese el tipo de vivienda donde vive[C(casa)/D(departamento)]: ";
        cin >> familias[cantidadFamilias].tipoVivienda;

        cout << "Ingrese la cantidad de habitantes: ";
        cin >> familias[cantidadFamilias].cantidad_habitantes;

        for (int i = 0; i < familias[cantidadFamilias].cantidad_habitantes; i++) {
            cout << "Habitante de la familia Nro-" << i + 1 << endl;

            cout << "Ingrese el nombre completo: ";
            cin.ignore();
            getline(cin >> ws, familias[cantidadFamilias].personas[i].nombreCompleto);

            cout << "Edad: ";
            cin >> familias[cantidadFamilias].personas[i].edad;

            sumaFlia += familias[cantidadFamilias].personas[i].edad;

            cout << "Ingrese el sexo[F(femenino)/M(masculino)]: ";
            cin >> familias[cantidadFamilias].personas[i].sexo;

            if (familias[cantidadFamilias].personas[i].sexo == 'F') {
                contF++;
            } else if (familias[cantidadFamilias].personas[i].sexo == 'M') {
                contM++;
            }

            cout << "Ingrese Nivel de estudios alcanzados[N(no posee)/P(primario)/S(secundario)/T(terciaro)/U(universitario): ";
            cin >> familias[cantidadFamilias].personas[i].estudios;

            switch (familias[cantidadFamilias].personas[i].estudios) {
                case 'N': contN++; break;
                case 'P': contP++; break;
                case 'S': contS++; break;
                case 'T': contT++; break;
                case 'U': contU++; break;
            }

            cout << "Ingrese estado del estudio[I(incompleto)/C(completo)]: ";
            cin >> familias[cantidadFamilias].personas[i].indicador;

            if (familias[cantidadFamilias].personas[i].edad > 10 && familias[cantidadFamilias].personas[i].estudios == 'N') {
                analfabetos++;
            }

            total++;
        }

        promedioFlia = static_cast<float>(sumaFlia) / familias[cantidadFamilias].cantidad_habitantes;
        cout << "Edad promedio de la familia: " << promedioFlia << endl;

        sumaCiudad += sumaFlia;
        cantidadFamilias++;

    } while (cantidadFamilias < MAXIMO_FAMILIAS && familias[cantidadFamilias].cantidad_habitantes != 0);

    if (total > 0) {
        promedioCiudad = static_cast<float>(sumaCiudad) / total;
        cout << "Edad promedio de la cuidad: " << promedioCiudad << endl;
    } else {
        cout << "No se ingresaron familias" << endl;
    }

    cout << "Nivel de Estudio de Habitantes" << endl;
    cout << "N: " << contN << endl;
    cout << "P: " << contP << endl;
    cout << "S: " << contS << endl;
    cout << "T: " << contT << endl;
    cout << "U: " << contU << endl;

    porcentajeFem = (contF / static_cast<float>(total)) * 100;
    porcentajeMas = (contM / static_cast<float>(total)) * 100;

    cout << "Porcentaje de encuestados Femeninos: " << porcentajeFem << "%" << endl;
    cout << "Porcentaje de encuestados Masculinos: " << porcentajeMas << "%" << endl;

    porcentaje = (analfabetos / static_cast<float>(total)) * 100;

    cout << "Porcentaje de analfabetos en la ciudad: " << porcentaje << "%" << endl;

    return 0;
}
