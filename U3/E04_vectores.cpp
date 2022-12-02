/*********************************************************************
Unidad 3 vectores
Juan Eduardo Rangel Macias UP220007 
27/10/2022                   ISC03A
Realizar un codigo para obtener el promedio a base de vectores 
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
  while (c==0)
  {
    
    
    printf("\ndesea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf("  %c",&salida);
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
