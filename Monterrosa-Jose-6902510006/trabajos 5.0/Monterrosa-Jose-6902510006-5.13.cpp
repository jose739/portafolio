#include <iostream>
#include <fstream>  
#include <string>   

using namespace std;

int main() {
    
    ifstream archivo("EMPRESA.txt");

   
    if (!archivo.is_open()) {
        cerr << "Error: No se pudo abrir el archivo EMPRESA.txt." << endl;
        return 1;  
    }

    string nombre;
    int edad;
    int mayores65 = 0;

    
    while (archivo >> nombre >> edad) {
        
        if (edad > 65) {
            mayores65++;
        }
    }

    
    archivo.close();

    
    cout << "Existen trabajadores mayores de 65 anios y son:" << mayores65 << "." << endl;

    return 0;  
}

