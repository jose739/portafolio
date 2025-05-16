//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n1, n2;

    cout << "Introduce el primer numero: ";
    cin >> n1;
    cout << "Introduce el segundo numero: ";
    cin >> n2;

    if (n1 % n2 == 0) {
        cout << "El numero " << n1 << " SI es divisible entre el numero " << n2;
    } else {
        cout << "El numero " << n1 << " NO es divisible entre el numero " << n2;
    }

    return 0;
}
