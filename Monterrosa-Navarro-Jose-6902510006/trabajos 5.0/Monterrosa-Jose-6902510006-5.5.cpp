#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Numeros primos entre 2 y 1000:" << endl;

    for (int i = 2; i <= 1000; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
