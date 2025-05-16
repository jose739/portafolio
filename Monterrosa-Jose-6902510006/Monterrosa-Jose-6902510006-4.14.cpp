//ELABORADO POR: JOSE MONTERROSA 6902510006//
#include <iostream>

using namespace std;

int main() {
    int nivel_actual, opcion;
    nivel_actual = 1; // Comenzamos en el primer nivel

    // Bucle para mantener el programa en ejecución
    while (true) {
        cout << "Estas en el nivel " << nivel_actual << endl;
        cout << "Selecciona una opcion: " << endl;

        // Opciones según el nivel actual
        if (nivel_actual == 1) {
            cout << "1. Subir de nivel" << endl;
            cout << "0. Salir del sistema" << endl;
        } else if (nivel_actual == 25) {
            cout << "2. Descender de nivel" << endl;
            cout << "0. Salir del sistema" << endl;
        } else {
            cout << "1. Subir de nivel" << endl;
            cout << "2. Descender de nivel" << endl;
            cout << "0. Salir del sistema" << endl;
        }

        cin >> opcion;

        switch (opcion) {
            case 1:
                if (nivel_actual < 25) {
                    nivel_actual++;
                    cout << "Avanzando al nivel " << nivel_actual << endl;
                } else {
                    cout << "No puedes subir mas." << endl;
                }
                break;
            
            case 2:
                if (nivel_actual > 1) {
                    nivel_actual--;
                    cout << "Descendiendo al nivel " << nivel_actual << endl;
                } else {
                    cout << " No puedes bajar mas." << endl;
                }
                break;
            
            case 0:
                cout << "Saliendo del sistema..." << endl;
                return 0;
            
            default:
                cout << "Opcion incorrecta. Inténtalo nuevamente." << endl;
                break;
        }
    }

    return 0;
}

