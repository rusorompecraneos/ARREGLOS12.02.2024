    #include <iostream>

    using namespace std;

    int main()
    {
        int A = 1, B = 2, C = 3, *p1, *p2; // Declara tres variables  (A, B, C) y dos punteros (p1, p2).
        p1 = &A;                           // Asigna la dirección de A al puntero p1.
        p2 = &C;                           // Asigna la dirección de C al puntero p2.
        *p1 = (*p2)++;                     // Incrementa el valor al que apunta p2 y asigna ese valor al p1.
        p1 = p2;                           // Asigna la dirección de C al puntero p1.
        p2 = &B;                           // Asigna la dirección de B al puntero p2.
        *p1 -= *p2;                        // Resta el valor de B del valor al que apunta p1.
        ++*p2;                             // Incrementa el valor al que apunta p2.
        *p1 *= *p2;                        // Multiplica el valor del p1 por el valor de p2.
        A = ++*p2 * *p1;                   // Incrementa el valor del p2, luego multiplica ese valor por el valor de p1 y asigna el resultado a A.
        p1 = &A;                           // Asigna la dirección de memoria de A al puntero p1.
        *p2 = *p1 /= *p2;                  // Divide el valor de p1 por el valor de p2, asigna el resultado a p2, y luego asigna ese resultado a *p2.
        
    }
    
