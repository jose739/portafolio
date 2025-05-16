#include <iostream>
using namespace std;

int main() {
    float tempAlta = 1, tempBaja = 1;
    int registrosInvalidos = 0, totalRegistros = 0, registrosValidos = 0;
    float sumaAltas = 0, sumaBajas = 0;

    cout << "Digita la temperatura maxima y minima del dia (0 0 para finalizar):" << endl;
    cin >> tempAlta >> tempBaja;

    while (tempAlta != 0 || tempBaja != 0) {
        totalRegistros++;

        if (tempAlta == 9 || tempBaja == 9) {
            registrosInvalidos++;
        } else {
            sumaAltas += tempAlta;
            sumaBajas += tempBaja;
            registrosValidos++;
        }

        cout << "Ingresa nuevamente las temperaturas maxima y mínima (0 0 para salir):" << endl;
        cin >> tempAlta >> tempBaja;
    }

    float promedioAlta = 0, promedioBaja = 0;
    float porcentajeInvalidos = 0;

    if (registrosValidos > 0) {
        promedioAlta = (float)sumaAltas / registrosValidos;
        promedioBaja = (float)sumaBajas / registrosValidos;
    }

    if (totalRegistros > 0) {
        porcentajeInvalidos = (float)registrosInvalidos * 100 / totalRegistros;
    }

    cout << "Cantidad de registros validos: " << registrosValidos << endl;
    cout << "Promedio de temperaturas altas: " << promedioAlta << endl;
    cout << "Promedio de temperaturas bajas: " << promedioBaja << endl;
    cout << "Numero de datos inválidos registrados: " << registrosInvalidos << endl;
    cout << "Porcentaje de errores encontrados: " << porcentajeInvalidos << "%" << endl;

    return 0;
}

