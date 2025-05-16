//ELABORADO POR: JOSE MONTERROSA 6902510006
#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    
    cout << "Introduce el dia: ";
    cin >> dia;
    cout << "Introduce el mes: ";
    cin >> mes;
    cout << "Introduce el anio: ";
    cin >> anio;
    
    int DiasMes = 0;
    
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        DiasMes = 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        DiasMes = 30;
    } else if (mes == 2) {
        DiasMes = 28;
    }
    
    if (DiasMes == 0) {
        cout << "Mes invalido." ;
    
    }
    
    if (dia < 1 || dia > DiasMes) {
        cout << "Dia invalido." ;
        
    }
    
    if (++dia > DiasMes) {
        dia = 1;
        if (++mes > 12) {
            mes = 1;
            anio++;
        }
    }
    
    cout << "La fecha del dia siguiente es: " << dia << "/" << mes << "/" << anio;
    
    return 0;
}

