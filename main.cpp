#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista Ejemplo;

    Ejemplo.InsertarInicio(20);
    Ejemplo.InsertarInicio(40);
    Ejemplo.InsertarFinal(60);
    Ejemplo.Imprimir();
    return 0;
}
