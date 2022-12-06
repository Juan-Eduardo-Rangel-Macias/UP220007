/*********************************************************************
Unidad 
Juan Eduardo Rangel Macias UP220007 
 / /2022                     ISC03A
Realizar 
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
//#include<stdlib.h>
#include "libro.h"

int main()
{
  int c;
  char salida;
  c=0;
  while (c==0)
  {
    int tope;
    tope=0;
    unsigned long long int facto;
    facto=0;
    printf("\n ingresa un numero para el factorial");
    scanf(" %d",&tope);
    facto = factorialr(tope);
    printf("elfactorial %d  es: %d",tope,facto);
    printf("\n desea volver a calcular otro factorial? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }

  
  getchar();
  return 0;
}
