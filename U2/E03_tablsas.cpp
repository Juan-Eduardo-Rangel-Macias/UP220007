/*********************************************************************
Unidad 2 tABLAS
Juan Eduardo Rangel Macias UP220007
4/10/2022                    ISC03A
Realizar Realizar una tabla de multiplicar con ciclos
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
  /* code */
  int n = 0;
  int r = 0;
  printf("¿De que numero deseas conocer la talba de multiplicar?");
  scanf(" %d", &n);
  for (size_t i = 1; i <= 10; i++)
  {
    r = i * n;
    printf("\n%dX%d=%d", n, i, r);
  }

  getchar();
  return 0;
}
