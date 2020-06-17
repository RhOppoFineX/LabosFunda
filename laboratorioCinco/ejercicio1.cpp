#include <iostream>
#include <cmath>

using namespace std;

int mcd(int, int);

int main (void){
    int mayor, menor;

    cout << "Digite el numero mayor" << endl;
    cin >> mayor;

    cout << "Digite el numero menor" << endl;
    cin >> menor;

    cout << endl << "El MCD de los dos numeros ingresados es: " << mcd(mayor, menor);
}

int mcd (int mayor, int menor){

    int residuo;
    
    do{
        residuo = mayor % menor;

        if(residuo != 0){
            mayor = menor;
            menor = residuo;
        }

    }while (residuo != 0);

    return menor;   
}