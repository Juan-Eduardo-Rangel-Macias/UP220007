/*********************************************************************
    Unidad 1. Tipos de datos
    Juan Eduardo Rangel Macias
    15/09/2022
    mostrar distintos tipos de datos en c++
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>
// libreria para uso de scanf y print f
#include <stdio.h>

// uso del namespace para evitar el std::
using namespace std;

// FUincion principal de tipo entero
int main()
{
    int n = 10;
    int suma = 0;
    int sumap = 0;
    int suman = 0;
    int sumat = 0;
    for (size_t i = 0; i <= n; i++)
    {
        if (i != 3)
        {
            printf("valor del contador %d \n", i);
        }
        suma = suma + i;
        if (i % 2 == 0)
        {
            sumap = sumap + i;
        }
        else if (i % 2 == 1)
        {
            suman = suman + i;
        }
        sumat = suman + sumap;
    }
    printf("la suma fue de: %d\n", suma);
    printf("la suma de los pares fue de: %d\n", sumap);
    printf("la suma de los impares fue de: %d\n", suman);
    printf("la suma de pares e impares fue de: %d\n", sumat);
    getchar();
    return 0;
}