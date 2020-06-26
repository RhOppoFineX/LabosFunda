#include <iostream>
#include <cmath>

using namespace std;
double promedio(int[], int);

int main(void)
{
    int longitud = 0;
    cout << "Ingrese la cantidad de numero enteros" << endl;
    cin >> longitud;
    int array[longitud];

    if(longitud <= 0){
        cout << "Cantidad no valida";
        return 0;
    }
        

    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese el valor" << endl;
        cin >> array[i];
    }

    cout << "El promedio de los valores ingresados es: " << promedio(array, longitud);
    
}

double promedio(int array[], int longitud)
{
    double suma = 0;
    for (int i = 0; i < longitud; i++)
    {
        suma += array[i];
    }

    return suma/longitud;    
}


