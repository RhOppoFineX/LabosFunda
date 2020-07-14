#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//se declara la estructura "producto"
struct producto
{
    string nombre;
    int cantidad;
    double precio_unitario;
    double costo_total;
};
//Definiendo funciones
void leer(producto[], int longitud);
void calcular(producto[], int longitud);
void desplegar(producto[], int longitud);
double costoTotal(producto[], int longitud);

int main (void)
{
    int cantidad_articulos;
    cout << "Ingrese la cantidad de articulos a procesar" << endl;
    cin >> cantidad_articulos;

    producto array [cantidad_articulos];   

    //Llamando a las funciones
    leer(array, cantidad_articulos);
    calcular(array, cantidad_articulos);
    desplegar(array, cantidad_articulos);

    cout << endl << "El costo total de la compra es: $" << costoTotal(array, cantidad_articulos);   
 
}

void leer(producto array [], int longitud)
{
    for (int i = 0; i < longitud; i++)
    {
        cout << endl << "Ingrese las caracteristicas del producto numero " << i+1 << endl;
        
            cout << "Ingrese el nombre: ";
            cin >> array[i].nombre;

            cout << "Ingrese la cantidad a llevar: ";
            cin >> array[i].cantidad;

            cout << "Ingrese el precio del producto: ";    
            cin >> array[i].precio_unitario;               
    }    
}

void calcular(producto array [], int longitud)
{
    for (int i = 0; i < longitud; i++)          
        array[i].costo_total = array[i].precio_unitario * array[i].cantidad;   
}

void desplegar(producto array [], int longitud)
{
    for (int i = 0; i < longitud; i++)    
    {
        cout << endl << "Las caracteristicas del producto numero son:" << i+1 << endl;

        cout << "Nombre: " << array[i].nombre << endl;
        cout << "Cantidad: " << array[i].cantidad << endl;
        cout << "Precio Unitario: " << array[i].precio_unitario << endl;
        cout << "Precio Total: " << array[i].costo_total << endl;
    }       
}

double costoTotal(producto array [], int longitud)
{
    double suma = 0;
    for (int i = 0; i < longitud; i++)    
        suma += array[i].costo_total;

    return suma;   
}