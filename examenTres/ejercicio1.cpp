#include <iostream>
#include <cmath>
using namespace std;

void calcularSalarios(double[][2], int);

int main (void){

    int cantidadEmpleados;       

    cout << "Ingrese la cantidad de Empleados a los cuales le ingresara los datos" << endl;
    cin >> cantidadEmpleados;    

    double datos [cantidadEmpleados] [2];// Datos de los empleados    


    for(int i = 0; i < cantidadEmpleados; i++){
        for(int j = 0; j < 2; j++){

            if(j==0){
                cout << "Ingrese las horas trabajadas por el empleado numero: " << i+1 << endl;
                cin >> datos[i][j];
            }

            if(j==1){
                cout << "Ingrese las horas EXTRAS del empleado numero: " << i+1 << endl;
                cin >> datos[i][j];
            }
            
        }
    }    
        calcularSalarios(datos, cantidadEmpleados);
}

void calcularSalarios(double datos [][2], int cantidadEmpleados){

    double horaNormal = 1.75, horaExtra = 2.50, Seguro = 0.04, AFP = 0.0625, Renta = 0.1;     

    // Salario Total (sin descuentos)

    for(int i = 0; i < cantidadEmpleados; i++){
        double salarioTotal = 0, salarioReal = 0;
        for(int j = 0; j < 2; j++){

            if(j==0){
                datos[i][j] *= horaNormal;
            }
            
            else if (j==1){
                datos[i][j] *= horaExtra;
            }   

            salarioTotal += datos[i][j];             
        }    
        cout << "El salario total (sin descuentos) del empleado/a Numero: " << i+1 << " es: $" << salarioTotal << endl; 

        // Salario con descuentos      
        salarioReal = salarioTotal;
        double descSeguro = 0, descAFP = 0, descRenta = 0;

        descSeguro = salarioReal * Seguro;
        descAFP =  salarioReal * AFP;      
        descRenta = salarioReal * Renta;

        if (salarioReal <= 500)
        {
            salarioReal -= descSeguro + descAFP;
        } else {
            salarioReal -= descSeguro + descAFP + descRenta;
        }        
        
        cout << "El salario Real (con descuentos) del empleado Numero: " << i+1 << " es: $" << salarioReal;

        cout << " " << endl << " " << endl << "";
    }       
} 