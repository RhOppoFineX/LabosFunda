#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

void horaAlSegundo(int, int, int);

int main() {

    int hora, minuto, segundo;
    
    cout << "Ingrese el valor de la hora en fomrato 24 horas" <<endl;
    cin >> hora;
    cout << "Ingrese el valor de los minutos en fomrato 24 horas" << endl;
    cin >> minuto;
    cout << "Ingrese el valor de los segundos en fomrato 24 horas" << endl;
    cin >> segundo;  

    horaAlSegundo(hora, minuto, segundo);   
          
}

void horaAlSegundo (int hora, int minuto, int segundo){    

    if(hora >= 0 && hora <=23 && minuto >=0 && minuto <=59 && segundo >=0 && segundo <=59){

        segundo++;

        if(segundo==60){
            minuto++; 
            segundo = 0;

            if(minuto==60){
                hora++;
                minuto = 0;

                if(hora==24)
                    hora = 0;
            }          
        }
    }   

    cout << endl << "La hora despues de un segundo es: " << hora << ":" << minuto << ":" << segundo;

}


