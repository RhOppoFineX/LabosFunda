#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string codificar(string, char[]);

int main (void)
{
    char array [10] = {'m', 'u', 'r', 'c', 'i', 'e', 'l', 'a', 'g', 'o'};   
    string frase;
    int a = 1;

    cout << "Ingrese la frase que quiere codificar" << endl;
    getline(cin, frase);

    cout << "La frase codificada es: " << codificar(frase, array);
    //cout << "es: " << frase;
    
}

string codificar(string frase, char array [])
{
    char codigo [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < frase.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(frase[i] == array[j])
            {
                frase[i] = codigo[j];   
            }
        }        
    }

    return frase;    
}



