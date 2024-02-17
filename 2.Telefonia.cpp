#include <iostream> 
using namespace std; 

int main()
{
     int prepago;
     int postpago;
     int descuento; 
     int multiplicacion, division, resta; 
     
    
    std::cout << "Bienvenido a una empresa de telefonia con planes prepago y postpago. " << endl;
    
    std::cout << "Para tu compra de plan prepago, ingresa el valor de tu compra " << endl;
    std::cin >> prepago;
    
    if (prepago > 100000 and prepago < 900000){
        std::cout << "Descuento del 10%, ingresalo a continuacion si el % " << endl;
        cin >> descuento; 
        multiplicacion = (prepago*descuento);
        division = (multiplicacion/100); 
        resta = (prepago - division);
        cout << "Su compra actual con el descuento aplicado es\n" << resta << endl; 
    }

    else {
        std::cout << "Descuento del 20%, ingreselo sin el %\n " << endl;
        cin >> descuento; 
        multiplicacion = (prepago*descuento);
        division = (multiplicacion/100); 
        resta = (prepago - division);
        cout << "Su compra actual con el descuento aplicado es\n" << resta << endl; 

    }
    
     std::cout << "Para tu compra de plan postpago, ingresa el valor de tu compra " << endl;
    std::cin >> postpago;
    
    if (postpago < 500000){
        std::cout << "Descuento del 15% " << endl;
        cin >> descuento; 
        multiplicacion = (postpago*descuento);
        division = (multiplicacion/100); 
        resta = (postpago - division);
        cout << "Su compra actual con el descuento aplicado es\n" << resta << endl; 
    }
    if (postpago > 500000 and postpago < 1000000){
        std::cout << "Descuento del 20%" << endl;
        cin >> descuento; 
        multiplicacion = (postpago*descuento);
        division = (multiplicacion/100); 
        resta = (postpago - division);
        cout << "Su compra actual con el descuento aplicado es\n" << resta << endl; 
    }
    if (postpago > 1000000) {
        cout << "descuento del 25%, ingreselo a continuacion sin el %" << endl; 
        cin >> descuento; 
        multiplicacion = (postpago*descuento);
        division = (multiplicacion/100); 
        resta = (postpago - division);
        cout << "Su compra actual con el descuento aplicado es\n" << resta << endl; 
        
    return 0;

    }
}
    

    


