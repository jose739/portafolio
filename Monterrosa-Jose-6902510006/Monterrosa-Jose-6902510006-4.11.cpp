//ELABORADO POR: JOSE MONTERROSA 6902510006//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1, num2, resultado;
    int opcion;
    
    // Mostrar las opciones de operaci�n al usuario
    cout << "Seleccione la operacion: " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Opcion: ";
    
    cin >> opcion; // Leer la opci�n ingresada por el usuario
    
    // Validar si la opci�n ingresada est� dentro del rango permitido (1-4)
    if (opcion < 1 || opcion > 4) {
        cout << "Error: Opcion no v�lida" << endl;
        return 1; // Finalizar el programa con c�digo de error
    }
    
    // Pedir al usuario los dos n�meros a operar
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    // Validar que no haya divisi�n por cero antes de ejecutar la operaci�n
    if (opcion == 4 && num2 == 0) {
        cout << "Error: Division por cero" << endl;
        return 1; // Finalizar el programa con c�digo de error
    }
    
    // Ejecutar la operaci�n correspondiente seg�n la opci�n ingresada
    switch (opcion) {
        case 1:
            resultado = num1 + num2; // Suma
            break;
        case 2:
            resultado = num1 - num2; // Resta
            break;
        case 3:
            resultado = num1 * num2; // Multiplicaci�n
            break;
        case 4:
            resultado = num1 / num2; // Divisi�n (ya validada previamente)
            break;
    }
    
    // Mostrar el resultado de la operaci�n
    cout << "El resultado es: " << resultado << endl;
    return 0; // Finalizar el programa correctamente
}

