//ELABORADO POR: JOSE MONTERROSA 6902510006//
#include <iostream>

using namespace std;

int main() {
    double num1, num2, resultado;
    int codigo;

    // Solicitar los dos números reales
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Solicitar el código de selección
    cout << "Ingrese el código de selección (1: Suma, 2: Multiplicacion, 3: Division): ";
    cin >> codigo;

    // Evaluar el código de selección
    if (codigo == 1) {
        resultado = num1 + num2;
        cout << "Resultado : " << resultado << endl;
    } else if (codigo == 2) {
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
    } else if (codigo == 3) {
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
        } else {
            cout << "No se puede dividir por cero." << endl;
        }
    } else {
        cout << "Código de selección invalido." << endl;
    }

    return 0;
}

