#include <iostream>
using namespace std;

int main() {
    int acumuladorA = 0, contadorA = 1;
    int acumuladorB = 0, contadorB = 1;
    int acumuladorC = 0, contadorC = 1;

    
    do {
        acumuladorA += contadorA;
        contadorA++;
    } while (contadorA <= 100);
    cout << "Resultado usando ciclo do-while: " << acumuladorA << endl;

    
    while (contadorB <= 100) {
        acumuladorB += contadorB;
        contadorB++;
    }
    cout << "Resultado utilizando while: " << acumuladorB << endl;

   
    for (contadorC = 1; contadorC <= 100; contadorC++) {
        acumuladorC += contadorC;
    }
    cout << "Resultado final con ciclo for: " << acumuladorC << endl;

    return 0;
}



