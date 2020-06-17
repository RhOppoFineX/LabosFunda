#include <iostream>
#include <cmath>

using namespace std;

void diaSiguiente(int, int, int);

int main (void){

    int dia, mes, year;

    cout << "Ingrese el dia" << endl;
    cin >> dia;
    cout << "Ingrese el mes" << endl;
    cin >> mes;
    cout << "Ingrese el año" << endl;
    cin >> year;

    diaSiguiente(dia, mes, year);


}

void diaSiguiente(int dia, int mes, int year){

    if(dia >=1 && dia <=31 && mes >=1 && mes <=31){
        
        if((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 31 && !(mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) ||   (dia == 28 && mes == 2 && ((year % 4 != 0) || (year % 100) == 0) && (year % 400) != 0)){

            mes++;
            dia = 1;
        } else {
            dia++;               
        }

        if(dia == 1 && mes == 13){
            mes = 1;
            year++;
        } 
    } else {
        cout << "fecha invalida";
    }

    cout << "la fecha al día siguiente es: " << dia << "-" << mes << "-" << year;

}