//ELABORADO POR: JOSE MONTERROSA 6902510006//
#include <iostream>
using namespace std;

// Variables: d = día, m = mes, a = año, dm = días en el mes
int d, m, a, dm;

int main() {
    // Solicitar el mes al usuario
    cout << "Ingrese el numero del mes (del 1 al 12): ";
    cin >> m;

    // Validar si el mes está en el rango correcto (1 a 12)
    if (m < 1 || m > 12) {
        cout << " Mes inválido. Debe estar entre 1 y 12." << endl;
        return 1;
    }
    
    // Pedir el año para todos los casos, no solo febrero
    cout << "Ingrese el anio: ";
    cin >> a;

    // Determinar la cantidad de días del mes ingresado
    if (m == 2) {
        // Comprobar si el año es bisiesto
        dm = (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) ? 29 : 28;
    } else {
        // Asignar los días según el mes correspondiente
        switch (m) {
            case 4: case 6: case 9: case 11:
                dm = 30;
                break;
            default:
                dm = 31;
                break;
        }
    }

    // Solicitar el día al usuario
    cout << "Ingrese el dia del mes: ";
    cin >> d;

    // Validar si el día está en el rango permitido
    if (d < 1 || d > dm) {
        cout << "Dia fuera de rango. Debe estar entre 1 y " << dm << "." << endl;
        return 1;
    }

    // Mostrar la fecha confirmada
    cout << "Fecha confirmada: " << d << "/" << m << "/" << a << endl;
    
    return 0;
}



