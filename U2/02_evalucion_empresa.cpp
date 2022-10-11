/*********************************************************************
Unidad 2 evaluacion empresas
Juan Eduardo Rangel Macias UP220007 
10/10/2022                   ISC03A
Realizar el calculo del bono de un empleado basandose en el rendimiento dle mismo
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
  float bono;
  float calidad = 0.0;
  int a;
  int c;
  char salida;
  c=0;
  while (c==0)
  {
    printf("\n¿Cual es su resultado de la evaluacion? ");
    scanf(" %f",&calidad);
    a = calidad * 10;
    if (a == 0)
    {
      printf("\nSu rango como empleado es Inaceptable");
      printf("\nSu resultado de la evaluacion fue %f",calidad);
      bono = calidad * 2400;
      printf("\nSsu bono es de $%.2f",bono);
    }
    else if (a == 4)
    {
      printf("\nSu rango como empleado es Aceptable");
      printf("\nSu resultado de la evaluacion fue %f",calidad);
      bono = calidad * 2400;
      printf("\nSsu bono es de $%0.2f",bono);
    }
    else if (a >= 6)
    {
      printf("\nSu rango como empleado es Meritorio");
      printf("\nSu resultado de la evaluacion fue %f",calidad);
      bono = calidad * 2400;
      printf("\nSsu bono es de $%.2f",bono);
    }
    
    printf("\n¿desea volver a calcular su bono? s/n");
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