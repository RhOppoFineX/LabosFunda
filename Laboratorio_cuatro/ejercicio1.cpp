#include <iostream>
#include <cmath>

using namespace std;

int main(void){

    int diviendo;
    int divisor;

    cout << "Ingrese el valor del dividendo" << endl;
    cin >> diviendo;

    cout << "Ingrese el valor del divisor" << endl;
    cin >> divisor;

    if((diviendo % divisor) == 0){
        cout << "Los numeros son divisibles exactamente" << endl << "Resultado: " << diviendo / divisor;        
    } else{
        cout << "Los numeros no son divisibles exactamente";        
    }   

    return 0;    
    
}


