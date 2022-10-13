/*********************************************************************
Unidad 2 binario a decimal
Juan Eduardo Rangel Macias UP220007 
11/10/2022                   ISC03A
Realizar la conversion de un numero binario a decimal
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
  int bin;
  int bincon;
  int deci;
  int d=1;
  int e=0;
  int potencia=0;
  while (c==0)
  {
    potencia = 0;
    deci = 0;
    printf("\nIntroduve el numero binario que deseas convertir ");
    scanf(" %d",&bin);
    bincon = bin;
    c=1;
    d=1;
    while (bincon != 0) 
    {
      if (potencia == 0 && bincon%10 ==1)
        {
          deci = deci + 1;
        }
      if (d==1)
      {
        bincon = bin;
        d=0;
      } else
      {
        deci = deci + ((bincon % 10) * pow(2,potencia));
      }
      bincon = bincon/10;
      potencia++;
      
    } 
    printf("\nsu numero binario es %d que en decimal es %d", bin, deci);
    
    
    
    printf("\ndesea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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