#include <iostream>
#include <cmath>
#include <string>

using namespace std;
double media(double[], int);
void alumnos(double[], double, int);

int main(void)
{
    int cantidad;
    string unidad;    

    //Aunque el ejercicio dice 25 esturas, se puede comprobar que funciona igualmente con menos datos, y así revisar más rápido.
    cout << "Ingrese la cantidad de estaturas a ingresar" << endl;  
    cin >> cantidad;

    cout << "Ingrese la unidad de medida (Cm o M)" << endl;
    cin >> unidad;    

    double estaturas [cantidad];
    

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese la estatura en: " << unidad << endl;
        cin >> estaturas[i];              
    }       

    alumnos(estaturas, media(estaturas, cantidad), cantidad);

}

double media(double estaturas[], int cantidad)
{
    double promedio = 0;
    for (int i = 0; i < cantidad; i++)
    {
        promedio += estaturas[i];
    }

    return promedio /= cantidad;
}

void alumnos(double estaturas[], double promedio, int cantidad)
{
    int arriba = 0, abajo = 0, media = 0;

    for (int i = 0; i < cantidad; i++)
    {
        if(estaturas[i] > promedio)
            arriba++;

        else if (estaturas[i] < promedio)
            abajo++;  

        else    
            media++;
    }

    cout << arriba << " alumnos estan arriba de la media" << endl;
    cout << abajo << " alumnos estan abajo de la media" << endl;    
    cout << media << " alumnos estan en la media: " << promedio << endl;    

}