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

void Orden(int x[], int v)
{
  int m, s, c;
  do
  {
    c = 0;
    for (int i = 0; i < v; i++)
    {
      s = i + 1;
      if (x[i] > x[s])
      {
        m = x[s];
        x[s] = x[i];
        x[i] = m;
        c++;
      }
    }

  } while (c > 0);
}

int main()
{
  int c;
  char salida;
  c=0;
  int datos;
  while (c==0)
  {
    printf("\n cuantos datos deseas ordenar? \n");
    scanf("%d",&datos);
    int d[datos];
    for (int i = 0; i < datos; i++)
    {
      printf("\nintroduce el numero: ");
      scanf(" %d",&d[i]);
    }
    
    int n=sizeof(d)/4;
    Orden(d,n);
    for (int i = 0; i < n; i++)
    {
      printf("%d,",d[i]);
    }
    
    printf("\n desea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}