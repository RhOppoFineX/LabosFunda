#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
void leerArreglo(double [], int);
void sumarArreglos(double [], double[], int, double[]);
void resultado(double[], int);
int main(void)
{
    int longitud = 0;
    cout << "Ingrese la longitud que tendrán los dos arreglos" << endl;
    cin >> longitud;

     if(longitud <= 0){
        cout << "Cantidad no valida";
        return 0;
    }   

    double array_uno [longitud];

    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese el elemento numero: "<< i+1 << " Del Primer arreglo" << endl;
        cin >> array_uno[i];
    }

    double array_dos [longitud] = {0};    
    leerArreglo(array_dos, longitud);

    double suma[longitud] = {0};
    sumarArreglos(array_uno, array_dos, longitud, suma);

    resultado(suma, longitud);   

}

void leerArreglo(double array_dos [], int longitud)
{
    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese el elemento numero: "<< i+1 << " Del Segundo arreglo" << endl;
        cin >> array_dos[i];        
    }    

}

void sumarArreglos(double array_uno [], double array_dos [], int longitud, double suma[])
{
    for (int i = 0; i < longitud; i++)
    {
        suma[i] = array_uno[i] + array_dos[i];
    }    
}

void resultado(double suma[], int longitud)
{
    for (int i = 0; i < longitud; i++)
    {
        cout << "El resultado de la suma en la posicion "<< i << " es: " << suma[i] << endl;
    }
    
}


