/*********************************************************************
Unidad 2. Renta
Juan Eduardo Rangel Macias
27/9/2022
Realizar el control de rente e impuestos
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

int renta = 0;
float rentad = 0;
float impuesto = 0;
int c;
char salida;
int main()
{
  c = 0;
  salida = 's';
  while (c == 0)
  {
    printf("\nIntroduce tu Renta para determinar tu Impuesto: ");
    scanf(" %d", &renta);
    if (renta >= 0)
    {
      if (renta < 10000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 5% ");
        impuesto = renta * 0.05;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.05;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
      else if (renta >= 10000 && renta < 20000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 15% ");
        impuesto = renta * 0.15;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.15;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
      else if (renta >= 20000 && renta < 35000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 20% ");
        impuesto = renta * 0.2;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.2;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
      else if (renta >= 35000 && renta < 60000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 30% ");
        impuesto = renta * 0.3;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.3;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }

      else
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 45% ");
        impuesto = renta * 0.45;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.45;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
    }
    else if (renta < 0)
    {
      printf("su renta no puede ser procesada");
    }

    printf("\nDeseas continuar? s=si n =no: ");
    scanf(" %c", &salida);
    if (salida == 'n' || salida == 'N')
    {
      printf("\nPase un excelente dia");
      c = 1;
    }
    else if (salida == 's' || salida == 'S')
    {
      c = 0;
    }
  }
  printf("\nAdios");
  getchar();
  getchar();
  return 0;
}