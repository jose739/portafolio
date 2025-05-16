#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombreMes;
    int anioIngresado;
    int cantidadDias = 0;

    while (true) {
        cout << "Escribe un mes para saber cuantos dias tiene (o escribe 'salir' para terminar): ";
        cin >> nombreMes;

        if (nombreMes == "salir") {
            break;
        }

        cout << "Ingresa el anio: ";
        cin >> anioIngresado;

        
        if (nombreMes == "enero" || nombreMes == "marzo" || nombreMes == "mayo" ||
            nombreMes == "julio" || nombreMes == "agosto" || nombreMes == "octubre" || nombreMes == "diciembre") {
            cantidadDias = 31;
        }
        else if (nombreMes == "abril" || nombreMes == "junio" || nombreMes == "septiembre" || nombreMes == "noviembre") {
            cantidadDias = 30;
        }
        else if (nombreMes == "febrero") {
            if ((anioIngresado % 4 == 0 && anioIngresado % 100 != 0) || (anioIngresado % 400 == 0)) {
                cantidadDias = 29;
            } else {
                cantidadDias = 28;
            }
        }
        else {
            cout << "Nombre de mes no valido." << endl;
            continue;
        }

        
        bool bisiesto = (anioIngresado % 4 == 0 && anioIngresado % 100 != 0) || (anioIngresado % 400 == 0);

        cout << "El anio " << anioIngresado << (bisiesto ? " es bisiesto" : " no es bisiesto");
        cout << " y el mes de " << nombreMes << " tiene " << cantidadDias << " dias." << endl;
    }

    return 0;
}


