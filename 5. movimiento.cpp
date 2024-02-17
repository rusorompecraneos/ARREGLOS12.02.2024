#include <iostream>

using namespace std;

int main() {
    double velocidad1, velocidad2, distancia;
    double tiempo_encuentro;
    
    // Solicita las velocidades y la distancia
    cout << "Ingrese la velocidad del primer automovil: " << endl;
    cin >> velocidad1;
    
    cout << "Ingrese la velocidad del segundo automovil: " << endl;
    cin >> velocidad2;
    
    cout << "Ingrese la distancia entre las ciudades: " << endl;
    cin >> distancia;
    

    tiempo_encuentro = (distancia / (velocidad1 - velocidad2));

    cout << "El tiempo que los aumoviles tardan en encontrarse es " << tiempo_encuentro << endl; 
    
}