/*********************************************************************
Unidad 2 For anidados
Juan Eduardo Rangel Macias UP220007
t/10/2022                    ISC03A
Realizar el anidamiento de 2 ciclos for
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

int main()
{
  int i;
  int j;
  int n = 0;
  for (i = 1; i <= 10; i++)
  {
    printf("\ntabla del %d", i);
    for (j = 1; j <= 10; j++)
    {
      n = i * j;
      printf("\n%dX%d=%d", i, j, n);
    }
  }

  getchar();
  return 0;
}