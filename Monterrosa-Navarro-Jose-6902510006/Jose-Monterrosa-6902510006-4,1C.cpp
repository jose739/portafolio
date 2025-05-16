//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>
#include <cmath>
using namespace std;

	int main() {
        int N, Npositivo, Nnegativo;
    Npositivo = 0;
    Nnegativo = 0;

   
    cout << "Digite el numero= ";
    cin >> N;

    	if (N> 0) {
        Npositivo = N;
} 
   		 else if (N < 0) {
        Nnegativo += N;
}

    cout << "La suma de numeros positivos es= " << Npositivo;
    cout << "La suma de numeros negativos es= " << Nnegativo;

return 0;
}
