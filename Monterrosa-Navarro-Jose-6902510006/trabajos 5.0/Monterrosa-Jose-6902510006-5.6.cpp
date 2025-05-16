#include <iostream>
using namespace std;

int main() {
    double nota;
    int aprobados = 0;
    int total = 0;

    cout << "Ingresa las calificaciones (termina con una nota negativa):" << endl;

    while (true) {
        cout << "Nota #" << (total + 1) << ": ";
        cin >> nota;

        if (nota < 0) {
            break;
        }

        if (nota >= 5) {
            aprobados++;
        }

        total++;
    }

    cout << "Total de estudiantes: " << total << endl;
    cout << "Total de aprobados: " << aprobados << endl;

    return 0;
}

