#include <iostream>
using namespace std;

int main (void){
    
    int pais, total, iva, cantidad;
     cout << "Escoga el pais, segun su numero de lista: " << endl << "1- El Salvador" << endl << "2- Guatemala" << endl << "3- Honduras" << endl << "4- España" << endl ;

     cin >> pais;
     cout << "Ingrese la cantidad de dinero" << endl;
     cin >> cantidad;

    switch (pais)
    {
        case 1:
            iva = cantidad * 0.13;
            total = cantidad + iva;

            cout << "El Valor del IVA en El Salvador es 13%, por lo tanto ese extra es de: $" << iva << " y su total a pagar es: $" << total;
        break;

        case 2:
            iva = cantidad * 0.09;
            total = cantidad + iva; 

            cout << "El Valor del IVA en Guatemala es 9%, por lo tanto ese extra es de: $" << iva << " y su total a pagar es: $" << total;
        break;

        case 3:
            iva = cantidad * 0.15;
            total = cantidad + iva;

            cout << "El Valor del IVA en Honduras es 15%, por lo tanto ese extra es de: $" << iva << " y su total a pagar es: $" << total;
        break;

        case 4:
            iva = cantidad * 0.20;
            total = cantidad + iva;

            cout << "El Valor del IVA en España es 20%, por lo tanto ese extra es de: $" << iva << " y su total a pagar es: $" << total;
        break;
    
        default:
            cout << "No ingreso un numero de país valido";
        break;
    }
}
