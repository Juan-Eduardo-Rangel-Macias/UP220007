/*********************************************************************
Unidad 2 sumatoria
Juan Eduardo Rangel Macias UP220007 
11/10/2022                   ISC03A
Realizar la sumatoria del 1 al 10 sin hacer uso del ciclo for
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
#include <math.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

int main()
{
  int c;
  char salida;
  c=0;
  int i=1;
  int suma;
  while (c==0)
  {
    i=0;
    while (i<=10)
    {
      suma = suma + i;
      i++;
    }
    printf("\nla suma del 1 al 10 da un resultado de %d",suma);
    
    printf("\ndesea volver a calcular la suma? s/n "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    if (toupper(salida)=='S')
    {
      c=0;
    }
    if (toupper(salida)=='N')
    {
      c=1;
    }
  }
  
  getchar();
  return 0;
}