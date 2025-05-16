//ELABORADO POR: JOSE MONTERROSA 6902510006
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float d, t;

    cout << "Digite el valor de la distancia: " ;
    cin >> d;

    if (d > 20 && d < 35) {
        cout << "Asignar valor a tiempo: " ;
        cin >> t;
        cout << "El valor de tiempo es: " << t ;
    }
    else if (d <= 20) {
        cout << "Asigne un valor de distancia adecuado" ;
    }
    else if (d >= 35) {
        cout << "La distancia ingresada es demasiado alta. Asigne un valor adecuado" << endl;
    }

    return 0;
}
