#include <iostream>
using namespace std;

int main() {
    int n;
    int a1 = 1, a2 = 2, an;

    cout << "Ingresa el valor de n: ";
    cin >> n;

    if (n == 1) {
        an = a1;
    } else if (n == 2) {
        an = a2;
    } else {
        for (int i = 3; i <= n; i++) {
            an = a1 + a2;
            a1 = a2;
            a2 = an;
        }
    }

    cout << "El termino " << n << " de la serie es: " << an << endl;

    return 0;
}

