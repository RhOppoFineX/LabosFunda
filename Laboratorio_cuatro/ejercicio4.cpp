#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main (void){

    char palabra [] = "";   
    int longitud;


    cout << "ingrese una palabra" << endl;
    cin >> palabra;

    longitud = strlen(palabra);

    cout << "la palabra tiene: " << longitud << " Caracteres" << endl;

    if (longitud % 2 == 0){
        cout << endl << "La longitud es par";
    } else
    {
        cout << endl << "La longitud es impar";
    }   



}