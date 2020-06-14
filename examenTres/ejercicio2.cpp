#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
void adivinar(int);

int main (void){

    int numero = (1 + rand()) % 100;
    adivinar(numero);

}

void adivinar(int numero){

    int condicion = 5, adivinando = 0;

    while (condicion != 0)
    {
        cout << "Ingrese un numero" << endl;
        cin >>  adivinando;        

        if(adivinando == numero){
            condicion = 0;
            cout << "Felicidades ha adivinado el numero";
        } else {
            if(numero > adivinando){
                cout << "El numero es mayor al que esta ingresando" << endl;
            } else if(numero < adivinando){
                cout << "El numero es menor al que esta ingresando" << endl;
            }   
            condicion--;      
            cout << "Le quedan " << condicion << " Intentos" << endl;              
        }            
    }       
    
}

