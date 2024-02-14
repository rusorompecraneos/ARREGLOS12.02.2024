#include <iostream>

using namespace std; 

int main(){
 
    // Calculadora. 

    string calculadora[5][3] = {{"1", "2", "3"}{"4", "5", "6"}{"7", "8", "9"}{"+", "0", "-"}{"*", "=", "√"}};
    int filas = sizeof(calculadora)/sizeof(calculadora[0]);
    int columnas = sizeof(calculadora)/sizeof(calculadora[0]);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << calculadora[i][j] << endl; 

         }
        
    }

    }