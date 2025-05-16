//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>

using namespace std;

int main() {
    int num;
    
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Es par" << endl;
    } else {
        cout << "Es impar" << endl;
    }

    return 0;
}
