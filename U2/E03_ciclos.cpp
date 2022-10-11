/*********************************************************************
Unidad 2 ciclos
Juan Eduardo Rangel Macias UP220007 
6/10/2022                    ISC03A
Realizar las tablas de multiplicar ida y venida con los tres ciclos vistos 
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
  int n = 0;
  int r=0;
  int y=0;
  printf("¿De que numero deseas conocer la talba de multiplicar?");
  scanf(" %d",&n);
  printf("\nTablas con ciclo for acendente");
  for (size_t i = 1; i <= 10; i++)
  {
    r = i * n;
    printf("\n%dX%d=%d",n,i,r);
  }
  printf("\nTablas con ciclo for desendente");
  for (size_t i = 10; i >= 1; i--)
  {
    r = i * n;
    printf("\n%dX%d=%d",n,i,r);
  }
  printf("\nTablas con ciclo while acendente");
  y=1;
  while (y <= 10)
  {
    r = y * n;
    printf("\n%dX%d=%d",n,y,r);
    y=y+1;
  }
  printf("\nTablas con ciclo while desendente");
  y=10;
  while (y >= 1)
  {
    r = y * n;
    printf("\n%dX%d=%d",n,y,r);
    y=y-1;
  }
  printf("\nTablas con ciclo do while acendente");
  y=1;
  do
  {
    r = y * n;
    printf("\n%dX%d=%d",n,y,r);
    y=y+1;
  } while (y<=10);
  
  printf("\nTablas con ciclo do while desendente");
  y=10;
  do
  {
    r = y * n;
    printf("\n%dX%d=%d",n,y,r);
    y=y-1;
  } while (y>=1);
  
  getchar();
  return 0;
}