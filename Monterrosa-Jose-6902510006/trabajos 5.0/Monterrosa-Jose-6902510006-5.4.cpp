#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int cantidad = 0;

    cout << "Ingresa nmeros positivos uno por uno. Termina con un numero negativo" << endl;

    while (true) {
        cout << "Ingresa un numero: ";
        cin >> numero;

        if (numero > 0) {
            suma += numero;
            cantidad++;
        } else {
            break;
        }
    }

    if (cantidad > 0) {
        double media = static_cast<double>(suma) / cantidad;
        cout << "La media es: " << media << endl;
    } else {
        cout << "No ingresaste ningun numero positivo." << endl;
    }

    return 0;
}

