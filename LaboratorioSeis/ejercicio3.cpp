#include <iostream>
#include <cmath>

using namespace std;
double incerteza(double[], double, int);

int main(void)
{
    int n = 0;
    double x = 0;
   
        cout << "Ingrese la cantidad de veces que realizo la medicion" << endl;
        cin >> n;

    if(n <= 0){
        cout << "Cantidad no valida";
        return 0;
    }   
    
    double mediciones [n];

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el valor de la medicion numero " << i+1 << endl;
        cin >> mediciones[i];
        x += mediciones[i];
    }

    x = x/n;           

    cout << "la incerteza de los datos ingresados es: " << incerteza(mediciones, x, n) << endl;     
    //cout << "promedio " << x << endl;

}

double incerteza(double mediciones [], double x, int n)
{
    double suma = 0;
    for (int i = 0; i < n ; i++)
    {
        suma += pow((mediciones[i] - x), 2);
       // cout << "diferencia a la 2 " << pow((mediciones[i] - x), 2) << endl;
    }    
    n -= 1;    
    return sqrt(suma/n);
    
}

