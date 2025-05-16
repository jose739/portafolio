//ELABORADO POR: JOSE MONTERROSA 6902510006//
#include<iostream>
#include<cmath>
using namespace std;

	int main()
{
    float n1, n2, n3, n4;

    	cout << "Digite el valor 1: " ;
    	cin >> n1;
    	cout << "Digite el valor 2: " ;
   	 	cin >> n2;
    	cout << "Digite el valor 3: " ;
   		 cin >> n3;

    n4 = 0;

    		if (n1 > n2 && n3 < 20) {
        	cout << "Asignar valor a x" ;
        	cin >> n4;
    }
    		else if (n1 < n2 && n3 > 20) {
       		 cout << "No se puede asignar valor a x" ;
    }
    		else if (n1 < n2 && n3 < 20) {
        	cout << "No se puede asignar un valor a x" ;
    }

    return 0;
}
