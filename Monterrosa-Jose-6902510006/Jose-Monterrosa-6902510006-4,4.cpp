//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo.";
    } else {
        double raiz = sqrt(numero);
        cout << "La raiz cuadrada de " << numero << " es: " << raiz;
    }

    return 0;
}
