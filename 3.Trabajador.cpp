#include <iostream> 
using namespace std; 

int main()
{
    int sueldo; 
    int aumento; 
    int multiplicacion, division, suma;

    cout << "\nIngrese el sueldo del trabjador por favor\n" << endl; 
    cin >> sueldo;

    if (sueldo < 1000000){
        cout << "\nAplicar un aumento del 15%. Ingreselo a continuacion sin el %\n" << endl;
        cin >> aumento;
        multiplicacion = (sueldo*aumento);
        division = (multiplicacion/100); 
        suma = (sueldo + division);
        cout << "\nEl nuevo sueldo del trabajador es\n" << suma << endl; 
    }


        }