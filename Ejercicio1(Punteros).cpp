#include <iostream>

using namespace std;

int main()
{
    int x, *P1, *P2; // Aqui se declaran la variable (x), y los punteros (P1 Y P2)
    *P1 = NULL;      // Aqui se les asigna un NULL al puntero P1
    *P2 = NULL;      // Aqui se les asigna un NULL al puntero P2
    x = 15;          // Se le asigna un valor 15 a la variale x
    P1 = &x;         // Se le asigna la direccion de x al puntero P1
    P2 = P1;         // Se le asigna el contenido de P1 a P2.
}
//Por lo tanto, lo que realmente queda almacenado en los punteros es 15, el valor de x.