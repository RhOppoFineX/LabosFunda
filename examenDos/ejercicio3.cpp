#include <iostream>
#include <cmath>

using namespace std;

int main (void){

    int color;
    int dinero;
    
    cout << "Escoga un color, segun si numero de lista: " << endl << "1- Negro" << endl << "2- Rojo" << endl << "3- Amarillo" << endl << "4- Anaranjado" << endl ;

    cin >> color;

    switch (color)
    {
        case 1:
            dinero = 10;
        break;

        case 2:
            dinero = 100;
        break;

        case 3:
            dinero = 5;
        break;

        case 4:
            dinero = 3;
        break;
    
        default:
            cout << "No ha ingresado ningun color valido";
        break;
    }

    cout << "Usted ha ganado: $" << dinero;
}