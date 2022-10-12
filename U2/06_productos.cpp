/*********************************************************************
Unidad
Juan Eduardo Rangel Macias UP220007
 / /2022                     ISC03A
Realizar
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
  int a = 1;
  char salida;
  c = 0;
  int d = 1;
  int total = 0;
  int producto = 0;
  while (c == 0)
  {
    producto = 1;
    while (a == 1)
    {
      producto = 0;
      printf("\nIntrodusca el presio de s producto #%d $ ", d);
      scanf(" %d", &producto);
      if (producto == 0)
      {
        a = 0;
      }
      total = total + producto;
      d++;
    }
    printf("\nel total de su compra fue $ %d", total);
    
    printf("\ndesea volver a calcular su bono? s/n "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c", &salida);
    if (toupper(salida) == 'S')
    {
      c = 0;
      a = 1;
    }
    if (toupper(salida) == 'N')
    {
      c = 1;
    }
  }

  getchar();
  return 0;
}