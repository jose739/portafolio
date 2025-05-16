//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>

using namespace std;

int main() {
    float peso;

    cout << "Ingrese el peso del alumno: ";
    cin >> peso;

    if (peso < 40) {
        cout << "Alumnos de menos de 40 kg." << endl;
    } else if (peso >= 40 && peso <= 50) {
        cout << "Alumnos entre 40 y 50 kg." << endl;
    } else if (peso > 50 && peso < 60) {
        cout << "Alumnos de más de 50 kg y menos de 60 kg." << endl;
    } else {
        cout << "Alumnos de más o igual a 60 kg." << endl;
    }

    return 0;
}
