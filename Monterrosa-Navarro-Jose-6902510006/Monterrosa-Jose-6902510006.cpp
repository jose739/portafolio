//Elaborado por Jose Monterrosa 6902510006
#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    int c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0;
    int c11 = 0, c12 = 0, c13 = 0, c14 = 0, c15 = 0;
    int c16 = 0, c17 = 0, c18 = 0, c19 = 0, c20 = 0;

    for (int i = 0; i < 20; ++i) {
        while (true) {
            cout << "Ingresa el numero #" << (i + 1) << " (entre 1 y 20): ";
            cin >> numero;

            if (numero >= 1 && numero <= 20) {
                suma += numero;

                if (numero == 1) c1++;
                else if (numero == 2) c2++;
                else if (numero == 3) c3++;
                else if (numero == 4) c4++;
                else if (numero == 5) c5++;
                else if (numero == 6) c6++;
                else if (numero == 7) c7++;
                else if (numero == 8) c8++;
                else if (numero == 9) c9++;
                else if (numero == 10) c10++;
                else if (numero == 11) c11++;
                else if (numero == 12) c12++;
                else if (numero == 13) c13++;
                else if (numero == 14) c14++;
                else if (numero == 15) c15++;
                else if (numero == 16) c16++;
                else if (numero == 17) c17++;
                else if (numero == 18) c18++;
                else if (numero == 19) c19++;
                else if (numero == 20) c20++;
                break;
            } else {
                cout << "Error: debe estar entre 1 y 20. Intenta otra vez."<<endl;
            }
        }
    }

    int moda = 1, maxf = c1;

    if (c2 > maxf) { moda = 2; maxf = c2; }
    if (c3 > maxf) { moda = 3; maxf = c3; }
    if (c4 > maxf) { moda = 4; maxf = c4; }
    if (c5 > maxf) { moda = 5; maxf = c5; }
    if (c6 > maxf) { moda = 6; maxf = c6; }
    if (c7 > maxf) { moda = 7; maxf = c7; }
    if (c8 > maxf) { moda = 8; maxf = c8; }
    if (c9 > maxf) { moda = 9; maxf = c9; }
    if (c10 > maxf) { moda = 10; maxf = c10; }
    if (c11 > maxf) { moda = 11; maxf = c11; }
    if (c12 > maxf) { moda = 12; maxf = c12; }
    if (c13 > maxf) { moda = 13; maxf = c13; }
    if (c14 > maxf) { moda = 14; maxf = c14; }
    if (c15 > maxf) { moda = 15; maxf = c15; }
    if (c16 > maxf) { moda = 16; maxf = c16; }
    if (c17 > maxf) { moda = 17; maxf = c17; }
    if (c18 > maxf) { moda = 18; maxf = c18; }
    if (c19 > maxf) { moda = 19; maxf = c19; }
    if (c20 > maxf) { moda = 20; maxf = c20; }

    cout << "Media: " << (suma / 20.0) << endl;
    cout << "Moda: " << moda << " (se repite " << maxf << " veces)" << endl;

    return 0;
}

