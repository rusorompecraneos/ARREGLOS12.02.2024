#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaración de variables para almacenar la información del animal
    string tipoAnimal[25];
    string nombreAnimal[25];
    int edadAnimal[25];
    string nombreDuenoAnimal[25];

    // Declaración de punteros
    string *punteroTipoAnimal = tipoAnimal;
    string *punteroNombreAnimal = nombreAnimal;
    int *punteroEdadAnimal = edadAnimal;
    string *punteroNombreDueno = nombreDuenoAnimal;

    // Solicitar información al usuario
    cout << "Ingrese el tipo de animal: " << endl;
    cin >> *punteroTipoAnimal;
    cout << "Ingrese el nombre del animal: " << endl;
    cin >> *punteroNombreAnimal;
    cout << "Ingrese la edad del animal: " << endl;
    cin >> *punteroEdadAnimal;
    cout << "Ingrese el nombre del dueño: " << endl;
    cin >> *punteroNombreDueno;

    // Mostrar la información del animal
    cout << "\nInformacion del animal:\n" << endl;
    cout << "Tipo: " << *punteroTipoAnimal << "\n" << endl;
    cout << "Nombre: " << *punteroNombreAnimal << "\n" << endl;
    cout << "Edad: " << *punteroEdadAnimal << "\n" << endl;
    cout << "Nombre del dueño: " << *punteroNombreDueno << "\n" << endl;

    return 0;
}
