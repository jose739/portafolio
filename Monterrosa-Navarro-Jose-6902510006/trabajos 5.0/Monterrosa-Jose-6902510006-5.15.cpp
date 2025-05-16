#include <iostream>
using namespace std;

int main() {
    const int NUM_EMPLEADOS = 50;
    int salario;
    int altos = 0, medios = 0, bajos = 0;

    cout << "Ingrese el salario mensual de cada uno de los 50 empleados (en pesetas): " <<endl;

    for (int i = 1; i <= NUM_EMPLEADOS; ++i) {
        cout << "Empleado " << i << ": ";
        cin >> salario;

        if (salario > 300000) {
            altos++;
        } else if (salario >= 100000 && salario <= 300000) {
            medios++;
        } else {
            bajos++;
        }
    }

    cout << "Resumen:";
    cout << "Empleados con salario alto (>300.000): " << altos << endl;
    cout << "Empleados con salario medio (100.000 - 300.000): " << medios << endl;
    cout << "Empleados con salario bajo (<100.000): " << bajos << endl;

    return 0;
}

