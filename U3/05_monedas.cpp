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
  int moneda;
  int residuo;
  int auxiliar;
  int retorno[10]={0,0,0,0,0,0,0,0,0,0};
  char *billetes[12]={"mil","quinientos","docientos","cien","cincuenta","veinte","diez","cinco","dos","un"};
  int money[10]={1000,500,200,100,50,20,10,5,2,1};
  residuo=0;
  c=0;
  auxiliar=0;
  moneda=0;

  while (c==0)
  {
    for (int i = 0; i < 10; i++)
    {
      retorno[i]=0;
    }
    
    printf("\ncual es la cantidad que deseas desglosar?");
    scanf(" %d",&moneda);
    residuo = moneda;
    while (residuo > 0)
    {
      for (int i = 0; i < 10; i++)
      {
        retorno[i] = residuo/money[i];
        auxiliar = retorno[i] *money[i];
        residuo = residuo - auxiliar ;
      }
      residuo = residuo - auxiliar ;
    }
    for (int i = 0; i < 10; i++)
    {
      if (retorno[i]==0)
      {}else{
        printf("\t\t%d de %s pesos",retorno[i],billetes[i]);
      }
    }
    
  printf("\n desea volver a deslosar otra moneda? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
  scanf(" %c",&salida);
  c = exit(salida);
  }
  getchar();
  return 0;
}