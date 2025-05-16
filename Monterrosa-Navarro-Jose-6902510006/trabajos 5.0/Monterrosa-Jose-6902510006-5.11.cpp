#include <iostream>
using namespace std;

int main() {
    double x;
    double suma = 1.0; 
    double termino = 1.0;
    double potencia = 1.0;
    double factorial = 1.0;
    int n = 1;
    double E = 1e-4;

    cout << "Ingresa el valor de x: ";
    cin >> x;

    while (true) {
        potencia *= x;     
        factorial *= n;    
        termino = potencia / factorial;

        if (termino < E)
            break;

        suma += termino;
        n++;
    }

    cout << "La suma de la serie E(x) es aproximadamente: " << suma << endl;

    return 0;
}

