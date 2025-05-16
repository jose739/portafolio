#include <iostream>
#include <string>
using namespace std;

int main() {
    char codigoArticulo;  
    double precioUnitario; 
    int numeroArticulos;  
    int cantidadA = 0, cantidadB = 0; 
    double totalA = 0, totalB = 0;    

   
    while (true) {
        cout << "Ingresa el codigo del articulo (A, B o X para terminar): ";
        cin >> codigoArticulo;

        
        if (codigoArticulo == 'X' || codigoArticulo == 'x') {
            break;
        }

        cout << "Ingresa el precio unitario del articulo: ";
        cin >> precioUnitario;

        cout << "Ingresa el numero de articulos: ";
        cin >> numeroArticulos;

        
        if (codigoArticulo == 'A' || codigoArticulo == 'a') {
            cantidadA += numeroArticulos;
            totalA += precioUnitario * numeroArticulos;
        } else if (codigoArticulo == 'B' || codigoArticulo == 'b') {
            cantidadB += numeroArticulos;
            totalB += precioUnitario * numeroArticulos;
        } else {
            cout << "Codigo de articulo no valido. Intenta de nuevo." << endl;
        }
    }

    
    cout << "Total de articulos A: " << cantidadA << endl;
    cout << "Importe total de articulos A: " << totalA << endl;
    cout << "Total de articulos B: " << cantidadB << endl;
    cout << "Importe total de articulos B: " << totalB << endl;

    return 0;
}

