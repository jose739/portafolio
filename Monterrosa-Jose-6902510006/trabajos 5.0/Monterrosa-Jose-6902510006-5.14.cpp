#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, capitalInicial;
    int anios = 0;
    double factor = 1.0;

    
    cout << "Ingresa el capital inicial: ";
    cin >> capitalInicial;

    cout << "Ingresa la tasa de interes anual (en %): ";
    cin >> R;

    double crecimiento = 1 + R / 100.0;

    
    while (factor < 2.0) {
        factor *= crecimiento;
        anios++;
    }

    cout << "El capital de " << capitalInicial << " se duplicara en aproximadamente " << anios << " anios." << endl;

    return 0;
}

