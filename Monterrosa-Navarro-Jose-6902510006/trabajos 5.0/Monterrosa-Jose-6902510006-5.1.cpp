#include <iostream>
using namespace std;

int main() {
    double numero, suma = 0;
    int contador = 0;

    cout << "Ingresa numeros positivos (termina con un numero negativo):" << endl;

    while (true) {
        cin >> numero;
        
        if (numero < 0) {
            break;  
        }

        suma += numero;
        contador++;
    }

    if (contador == 0) {
        cout << "No ingresaste ningún numero positivo." << endl;
    } else {
        double media = suma / contador;
        cout << "La media de los numeros ingresados es: " << media << endl;
    }

    return 0;
}
