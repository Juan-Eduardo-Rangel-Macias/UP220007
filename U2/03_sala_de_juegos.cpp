/*********************************************************************
Unidad 2 sala de juegos
Juan Eduardo Rangel Macias UP220007
10/10/2022                   ISC03A
Realizar el generador de precios de una sala de juegos
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
  int c;
  char salida;
  int edad = 0;
  c = 0;
  while (c == 0)
  {
    printf("\nIntroduzca su edad ");
    scanf(" %d", &edad);
    if (edad >= 0 && edad < 4)
    {
      printf("\nSu edad es de %d", edad);
      printf("\nEl costo de su boleto es de $0 entra gratis");
      printf("\nEsperemos pase un excelente dia disfrute su esancia");
    }
    else if (edad >= 4 && edad < 18)
    {
      printf("\nSu edad es de %d", edad);
      printf("\nEl costo de su boleto es de $5");
      printf("\nEsperemos pase un excelente dia disfrute su esancia");
    }
    else if (edad >= 18)
    {
      printf("\nSu edad es de %d", edad);
      printf("\nEl costo de su boleto es de $10");
      printf("\nEsperemos pase un excelente dia disfrute su esancia");
    }
    else
    {
      printf("\n su edad no es valida vuelva a introducirla");
    }

    printf("\nDesea pagar otro voleto de entrada? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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