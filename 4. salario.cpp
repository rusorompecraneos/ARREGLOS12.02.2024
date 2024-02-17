#include <iostream> 
using namespace std; 

int main()
{
    int salario_semanal;
    int horas_trabajadas;
    int horas_normales = 35;
    int horas_extras = 5000; 

    cout << "Ingrese las horas trabajadas en la semana " << endl;
    cin >> horas_trabajadas;

    if (horas_trabajadas < 35){ 
        salario_semanal = (horas_trabajadas*40.000);
         cout << "Su salario es de: " << salario_semanal << endl; 
    }
    else {
        salario_semanal = (horas_normales * 40 + (horas_trabajadas - horas_normales) * horas_extras);
        cout << "Su salario es de: " << salario_semanal << endl;
    }
}