#include <iostream>
#include <cmath>

using namespace std;

bool bisiesto(int);

int main(void){

    int year;

    cout << "Ingrese el año" << endl;
    cin >> year;

    if(bisiesto(year)){
        cout << "el año es bisiesto" << endl;     

    } else {
        cout << "No es un año bisiesto" << endl;
    }
    
}

bool bisiesto(int year){

    if(year % 400 == 0){
        return true;
    } else {
        if((year % 4 == 0) && ! (year % 100 == 0)){
            return true;
        } else {
            return false;
        }
        
    }
}


