#include <iostream>
using namespace std;

int main() {
    int nota;
    int cantidadNotables = 0;  

    cout << "Ingresa las notas de la clase una por una." << endl;
    cout << "Termina con una nota negativa." << endl;

    while (true) {
        cout << "Nota: ";
        cin >> nota;

        if (nota < 0) {
            break; 
        }

        if (nota >= 7 && nota < 9) {
            cout << "Nota notable: " << nota << endl;
            cantidadNotables++;  
        }
    }

    
    cout << "Total de notas notables: " << cantidadNotables << endl;

    return 0;
}

