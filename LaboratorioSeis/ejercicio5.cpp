#include <iostream>
#include <cmath>

using namespace std;
void desplegar(int []);

int main(void)
{
    int array [100];
    int N = 0;

    for (int i = 0; i < 100; i++)
    {
        array[i] = (2*(N))+1;        
        N++;
    }

    desplegar(array);       
}

void desplegar (int array[])
{
    for (int i = 99; i >= 0; i--)
    {
        cout << "Numero: " << array[i] << endl;        
    }    
}