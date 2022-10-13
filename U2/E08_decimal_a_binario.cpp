/*********************************************************************
Unidad 2 conversor de decimal a binario 
Juan Eduardo Rangel Macias UP220007 
22/20/2022                   ISC03A
Realizar un conversor de numeros decimales a numeros binarios
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
  int potencia;
  int deci;
  int bin;
  int decicon;
  int pot = 0;
  int s;
  while (c==0)
  {
    s=0;
    potencia = 0;
    deci = 0;
    bin = 0;
    pot = 0;
    printf("que numero deseas convertir de decmal a inario ? ");
    scanf(" %d",&deci);
    decicon = deci;
    while (decicon != 0)
    {
      pot = pot * 10;
      if (potencia == 0 && decicon%2 ==1)
      {
        bin = bin +1;
        pot = 1;
      }
      else if(potencia == 0 && decicon%2 ==0)
      {
        bin = bin;
        pot = 1;
      }
      else if(potencia >= 0)
      {
        bin = bin + ((decicon%2)*pot);
      }
      decicon = decicon/2;
      potencia = potencia + 1;
    }
    printf("\nsu numero binario es %d que en decimal es %d", deci, bin);
    
    printf("\ndesea volver a calcular su bono? s/n "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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