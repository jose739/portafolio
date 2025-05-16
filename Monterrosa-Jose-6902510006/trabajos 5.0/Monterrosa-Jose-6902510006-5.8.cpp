#include <iostream>
using namespace std;

int main() {
    int numero;
    int sumaPositivos = 0, sumaNegativos = 0;
    int cantidadPositivos = 0, cantidadNegativos = 0;
    double mediaPositivos = 0, mediaNegativos = 0;

    cout << "Ingresa 100 numeros." << endl;

    for (int i = 1; i <= 100; i++) {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (numero > 0) {
            sumaPositivos += numero;
            cantidadPositivos++;
        } else if (numero < 0) {
            sumaNegativos += numero;
            cantidadNegativos++;
        }
    }

  
    if (cantidadPositivos > 0) {
        mediaPositivos = sumaPositivos / cantidadPositivos;
        cout << "La media de los numeros positivos es: " << mediaPositivos << endl;
    } else {
        cout << "No se ingresaron numeros positivos." << endl;
    }

    if (cantidadNegativos > 0) {
        mediaNegativos = sumaNegativos / cantidadNegativos;
        cout << "La media de los numeros negativos es: " << mediaNegativos << endl;
    } else {
        cout << "No se ingresaron numeros negativos." << endl;
    }

    return 0;
}

