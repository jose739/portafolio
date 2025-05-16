//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    
    cout << "Introduce el primer numero: ";
    cin >> n1;
    cout << "Introduce el segundo numero: ";
    cin >> n2;
    cout << "Introduce el tercer numero: ";
    cin >> n3;
    
    if ((n1>n2 && n1<n3) || (n1>n3 && n1<n2)) {
    	
        cout << "El numero central es: " << n1;
    }
    if ((n2>n1 && n2<n3) || (n2>n3 && n2<n1)) {
    	
        cout << "El numero central es: " << n2;
    }
    if ((n3>n1 && n3<n2) || (n3>n2 && n3<n1)) {
    	
        cout << "El numero central es: " << n3;
    }
    
    return 0;
}

