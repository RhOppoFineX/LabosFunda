#include <iostream>
#include <cmath>

using namespace std;
void verificacion(int);

int main (void){

    int year;

    cout << "Ingrese el año";
    cin >> year;

    verificacion(year);    
}

void verificacion(int year){

    if(year % 400 == 0){
        cout << "El año es bisiesto";
    } else {
        if((year % 4 == 0) && ! (year % 100 == 0)){
            cout << "El año es bisiesto";
        } else {
            cout << "El año no es bisiesto";
        }
        
    }
    
}