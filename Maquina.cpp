#include <iostream>

using namespace std; 

int main(){

    //Maquina

    int columnas;
    int filas; 

    cout << "Ingrese el numero de columnas " << endl;
    cin >> columnas; 

    cout << "Ingrese el numero de filas " << endl; 
    cin >> filas; 

    int maquina[filas][columnas]; 

    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout << "Ingrese el nombre del producto y el valor que desea"
            cin >> maquina;

        }
        }
            for (int e = 0; e < filas; e++)
    {
        for (int o = 0; o < columnas; o++)
        {
            cout << maquina[filas][columnas] << endl; 

    }         

