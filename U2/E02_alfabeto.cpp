/*********************************************************************
Unidad 2 Alfabeto
Juan Eduardo Rangel Macias UP220007
28/9/2022                    ISC03A
Realizar la impresion de un alfabeo
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;
// for del 10 al 1 alfabeto ida y benida y mayusculas

int f;
char cadena[29] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', '@', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main()
{
  printf("\n");
  for (f = 0; f <= 26; f++)
  {
    printf("%c, ", cadena[f]);
  }
  printf("\n");
  for (f = 26; f >= 0; f--)
  {
    printf("%c, ", cadena[f]);
  }
  printf("\n");
  for (f = 0; f <= 26; f++)
  {
    printf("%c, ", toupper(cadena[f]));
  }
  printf("\n");
  for (f = 1; f <= 10; f++)
  {
    printf("%d, ", f);
  }

  getwchar();
  return 0;
}
