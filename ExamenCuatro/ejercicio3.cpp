#include <iostream>
#include <cmath>

using namespace std;
void matriz(double [][5], int);
void calcular(double [][5], int);

int main (void)
{
    int cantidad;
    cout << "Ingrese la cantidad de estudiantes" << endl;
    cin >> cantidad;
    double Estudiantes [cantidad][5];

    matriz(Estudiantes, cantidad);
    calcular(Estudiantes, cantidad);   


}

void matriz (double Estudiantes [][5], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Ingrese la nota " << j+1 << " Del estudiate numero: " << i+1 << endl;
            cin >> Estudiantes[i][j];
        }        
    }    
}

void calcular(double Estudiantes[][5], int cantidad)
{
    double promedio = 0;
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            promedio += Estudiantes[i][j];
        }

        promedio /= 5;

        if(promedio >= 6){
            cout << "El estudiante numero "<< i+1 << " a Aprobado con promedio de: "<< promedio << endl;
            promedio = 0;
        } else if (promedio < 6){
            cout << "El estudiante numero "<< i+1 << " a Reprobado con promedio de: "<< promedio << endl;
            promedio = 0;
        }
    } 
}