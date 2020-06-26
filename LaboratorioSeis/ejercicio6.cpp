#include <iostream>
#include <cmath>

using namespace std;
int verificar(int [], int, int);

int main (void)
{
    int longitud = 0, numero;
    cout << "Ingrese la longitud que tendra el arreglo" << endl;
    cin >> longitud;

     if(longitud <= 0){
        cout << "Cantidad no valida";
        return 0;
    }   

    int array [longitud];

    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese el elemento numero: "<< i+1 << endl;
        cin >> array [i];
    }

    cout << "Ingrese el numero que desea ver cuantas veces se repite" << endl; 
    cin >> numero;

    cout << "El numero se repite: " << verificar(array, numero, longitud) << " Veces";
}

int verificar(int array[], int numero, int longitud)
{
    int cont = 0;
    for (int i = 0; i < longitud; i++)
    {
        if (numero == array[i])
            cont++;
    }    
    return cont;
}