//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>
#include <cmath>


using namespace std;

int main() {
    
    float a;

 
    cout << "Digite el angulo= ";
    cin >> a;

 
    if (a == 90) {
        cout << "Es un angulo recto";
    } 
    else if (a < 90) {
        cout << "Es un angulo agudo";
    } 
    else if (a > 90) {
        cout << "Es un angulo obtusos";
    }

    return 0;
}
