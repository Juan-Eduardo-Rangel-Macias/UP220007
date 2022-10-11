/*********************************************************************
Unidad 2 promedios
Juan Eduardo Rangel Macias UP220007 
10/19/2022                   ISC03A
Realizar el promediado y obtencion del dato mayor y dato menor de una serie de datos
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
  int temperatura[7];
  int a;
  int dme;
  int dma;
  int i;
  int suma;
  float promedio;
  c=0;
  dma = 0;
  dme = 0;
  suma = 0;
  promedio = 0.0;
  while (c==0)
  {
    printf("\nBienvenido al sensador de temperaturas");
    for ( i = 0; i < 6; i++)
    {
      printf("\nintroduzca la temperatura #%d ",i+1);
      scanf(" %d",&temperatura[i]);
      if (i == 0)
      {
        dme = temperatura[i];
      }
      
    }
    for ( i = 0; i < 6; i++)
    {
      if (temperatura[i] < dme)
      {
        dme = temperatura[i];
      }
      if (temperatura[i] > dma)
      {
        dma = temperatura[i];
      }
      suma = suma + temperatura[i];
    }
    promedio = suma / 6 ;
    printf("\nLa temperatura menor es %d grados",dme);
    printf("\nLa temperatura menor es %d grados",dma);
    printf("\nEl promerio de las temperaturas es de %f grados",promedio);
    
    printf("\nDesea volver a calcular tu promedio? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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