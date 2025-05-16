#include <iostream>
using namespace std;

int main() {
    int n;
    bool esPrimo = true;

    cout << "Ingresa un numero entero positivo mayor que 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "El numero debe ser mayor que 1." << endl;
        return 1; 
    }

    
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo) {
        cout << "El numero " << n << " es primo." << endl;
    } else {
        cout << "El numero " << n << " es compuesto." << endl;
    }

    return 0;
}

