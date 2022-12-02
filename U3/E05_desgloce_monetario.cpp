/*********************************************************************
Unidad 3  Sistema monetario
Juan Eduardo Rangel Macias UP220007 
3/11/2022                    ISC03A
Realizar el desglose de cuanto se le regresa al usuario basandose en el sistema monetario mexicano 
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
  int moneda;
  int residuo;
  int auxiliar;
  int retorno[10]={0,0,0,0,0,0,0,0,0,0};
  char *billetes[12]={"mil","quinientos","docientos","cien","cincuenta","veinte","diez","cinco","dos","uno"};
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
      if (residuo/1000 >= 1)
      {
        retorno[0] = residuo/1000;
        auxiliar = retorno[0] *1000;
        //residuo = residuo - auxiliar ;
      } else if (residuo/500 >= 1)
      {
        retorno[1] = residuo/500 ;
        auxiliar = retorno[1] * 500;
        //residuo = residuo - auxiliar ;
      } else if (residuo/200 >= 1)
      {
        retorno[2] = residuo/200 ;
        auxiliar = retorno[2] * 200;
        //residuo = residuo - auxiliar ;
      } else if (residuo/100 >= 1)
      {
        retorno[3] = residuo/100 ;
        auxiliar = retorno[3] * 100;
        //residuo = residuo - auxiliar ;
      } else if (residuo/50 >= 1)
      {
        retorno[4] = residuo/50 ;
        auxiliar = retorno[4] * 50 ;
        //residuo = residuo - auxiliar ;
      } else if (residuo/20 >= 1)
      {
        retorno[5] = residuo/20 ;
        auxiliar = retorno[5] * 20 ;
        //residuo = residuo - auxiliar ;
      } else if (residuo/10 >= 1)
      {
        retorno[6] = residuo/10 ;
        auxiliar = retorno[6] * 10 ;
        //residuo = residuo - auxiliar ;
      } else if (residuo/5 >= 1)
      {
        retorno[7] = residuo/5 ;
        auxiliar = retorno[7] *5;
        //residuo = residuo - auxiliar ;
      } else if (residuo/2 >= 1)
      {
        retorno[8] = residuo/2 ;
        auxiliar = retorno[8] *2;
        //residuo = residuo - auxiliar ;
      }else if (residuo/1 >= 1)
      {
        retorno[9] = residuo/1 ;
        auxiliar = retorno[9] *1;
        //residuo = residuo - auxiliar ;
      }
      residuo = residuo - auxiliar ;
    }
    for (int i = 0; i < 10; i++)
    {
      printf("\t\t%d de %s",retorno[i],billetes[i]);
    }
/*    cout << endl;    
        for (int i = 0; i < 10; i++)
    {
      cout << retorno[i] << " de " << billetes[i] << "\t";
    }*/
    cout << endl;
    
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