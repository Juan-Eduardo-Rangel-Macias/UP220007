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
  char salida;
  c=0;
  while (c==0)
  {
    int a[3][3]={
      {1,2,3},
      {4,5,6},
      {7,8,9}
    };
    int b[3]={0,0,0};
    int e[3]={0,0,0};
    int f[3][3];
    int d;
    int i;
    int j;
    d=0;
    for (int i = 0; i < 3; i++)
    {
      printf("\t%i",a[i][i]);
    }
    
    for ( i = 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
        b[i] = b[i] + a[i][j];
        e[i] = e[i] + a[j][i];
      }
    }
        for ( i = 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
        f[j][i]=a[i][j];
      }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
      printf("\t %d",b[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
      printf("\t %d",e[i]);
    }
    printf("\n");
    printf("\n");
    for ( i = 0; i < 3; i++)
    {
      for ( j = 0; j < 3; j++)
      {
        printf("\t%d",f[i][j]);
      }
      printf("\n");
    }
    
    
    printf("\n desea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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