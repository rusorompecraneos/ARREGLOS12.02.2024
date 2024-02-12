#include <iostream>

using namespace std; 

int main(){

    //1. Crear dos vectores de n cantidad de numeros que el usuario diligencie, 
    //sumar los valores diligenciados por el usuario en cada vector. Comparar esos dos (si son iguales o no)
    //2. Crear un vector de n posiciones simulando el codigo de buscaminas, 
    //y al final debe mostrarme la cantidad de minas


    int cantidad_num1[n];
    int cantidad_num2[i];
    int suma1=0;
    int suma2=0;

    cout << "Ingrese la cantidad de numeros que desea ingresar en el arreglo 1" << endl; 
    cin >> cantidad_num1;
    int numeros1[cantidad_num1];

    cout << "Ingrese la cantidad de numeros que desea ingresar en el arreglo 2" << endl; 
    cin >> cantidad_num2;
    int numeros2[cantidad_num2];

    for (int i = 0; i < cantidad_num1; i++)
    {
        cout << "ingrese el numero en la posicion"<< i << endl;
        cin >> numeros1[i];
        suma1 = ++ numeros1[i]; 
    }
    
    for (int n = 0; n < cantidad_num2; i++){

        cout << "ingrese el numero en la posicion"<< n << endl;
        cin >> numeros2[i];
        suma2 = ++ numeros2[n];
    }

        cout << numeros1[i] << numeros[n] endl; 

        if (suma1 == suma2){
            cout << "Las sumas son iguales"
        }
        else {
            cout << "Las sumas no son iguales" << endl; 
        }


}