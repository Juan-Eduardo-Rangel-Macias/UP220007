/*********************************************************************
Unidad 2 factorial
Juan Eduardo Rangel Macias UP220007
11/10/2022                   ISC03A
Realizar un codigo capas de calcular el factorial de un numero
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
  int factorial;
  int i;
  int limfact;
  c = 0;
  while (c == 0)
  {
    printf("\nIntroduce el numero del cual deseas saber el factoral ");
    scanf(" %d", &limfact);
    i = 1;
    factorial = 1;
    if (limfact == 0)
    {
      factorial = 1;
      printf("\nel factorial de %d es %d",limfact, factorial);
    }
    else if (limfact > 0)
    {
      while (i <= limfact)
      {
        factorial = factorial * i;
        i++;
      }
      printf("\nel factorial de %d es %d",limfact, factorial);
    }else
    {
      printf("\nsu factorial no puede ser calculado");
    }
    

    printf("\ndesea volver a calcular otro factorial? s/n "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c", &salida);
    if (toupper(salida) == 'S')
    {
      c = 0;
    }
    if (toupper(salida) == 'N')
    {
      c = 1;
    }
  }

  getchar();
  return 0;
}