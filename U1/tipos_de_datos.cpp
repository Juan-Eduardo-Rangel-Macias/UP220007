/*********************************************************************
    Unidad 1. Tipos de datos
    Juan Eduardo Rangel Macias
    15/09/2022
    mostrar distintos tipos de datos en c++
*********************************************************************/

//libreria para manejo de entradas
#include <iostream>
//libreria para uso de scanf y print f
#include <stdio.h>

//uso del namespace para evitar el std::
using namespace std;

//FUincion principal de tipo entero
int main()
{
    int entero = 2147483647;
    float flotante = 3.4e38;
    double grande = 2.565465654654;
    char caracter = '@';

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "el numero entero es: " << entero << endl;
    cout << "el tamaño del numero entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "el numero caracter es: " << caracter<< endl;
    cout << "el tamaño del numero caracter es: " << sizeof(caracter) << "bytes" << endl;
    //cout << "el numero flotante es: " << flotante << endl;
    //getchar();
    return 0;
}

