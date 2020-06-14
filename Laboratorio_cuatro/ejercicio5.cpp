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
    char primera = palabra [0];
    char ultima = palabra [longitud-1];

    if (1==1){
        cout << "La palabra inicia y finaliza con la misma letra: " << longitud << " primera: " <<primera << " ultima: " << ultima;
    }   
    else
    {
        cout << "No tienen la misma letra al principio y al final";
    }

}