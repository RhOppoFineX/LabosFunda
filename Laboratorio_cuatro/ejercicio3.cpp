#include <iostream>
#include <cmath>

using namespace std;

int main (void){
    int numero;

    cout << "Ingrese el numero: " << endl;

    cin >> numero;

    if (numero > 0 ){
        cout << "El numero es positivo";
    } else if (numero < 0)
    {
        cout << "El numero es negativo";        
    } else {
        cout << "El numero es cero";
    }
    
}