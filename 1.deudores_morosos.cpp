#include <iostream>
using namespace std;

int main(){

    int deuda;
    int descuento;
    int multiplicacion;
    int division;
    int resta;

    cout << "Escriba el valor de su deuda por favor" << endl;
    cin >> deuda;

    if (deuda > 60000 and deuda < 150000){
        cout << "20% de descuento. Ingreselo a continuacion: " << endl;
        cin >> descuento;
        multiplicacion = (deuda*descuento);
        division = (multiplicacion/100); 
        resta = (deuda - division);
        cout << "Su deuda actual con el descuento aplicado es " << resta << endl; 
    }
    
    if (deuda > 150000 and deuda < 300000){
        cout << "30% de descuento. Ingreselo a continuacion sin el %: " << endl;
        cin >> descuento;
        multiplicacion = (deuda*descuento);
        division = (multiplicacion/100); 
        resta = (deuda - division);
        cout << "Su deuda actual con el descuento aplicado es " << resta << endl; 
    }
    
    if (deuda > 300000 and deuda < 800000){
        cout << "40% de descuento. Ingreselo a continuacion sin el %: " << endl;
        cin >> descuento;
        multiplicacion = (deuda*descuento);
        division = (multiplicacion/100); 
        resta = (deuda - division);
        cout << "Su deuda actual con el descuento aplicado es " << resta << endl; 
    }
    
    if (deuda > 800000){
        cout << "50% de descuento. Ingreselo a continuacion sin el %: " << endl;
        cin >> descuento;
        multiplicacion = (deuda*descuento);
        division = (multiplicacion/100); 
        resta = (deuda - division);
        cout << "Su deuda actual con el descuento aplicado es " << resta << endl; 
    }
    return 0; 
}
