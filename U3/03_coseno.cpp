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

float rad(int angulo){
  float radianes;
  radianes = (angulo*M_PI)/180.0;
  return radianes;
  }

float coseno(int anuglo){
  float valor;
  valor=0.0;
  for (float i = 0.0; i < 17.0; i++)
  {
    /*if (i==0)
    {
      valor=1;
    }
    else
    {
      valor=valor+pow((-1),i)*(pow((anuglo*M_PI)/180,(2*i))/factorial(2*i));
    }*/
    valor=valor+pow((-1),i)* (powf(rad(anuglo),(2.0*i))/factorial(2*i));
  }
  return valor;
}

int main()
{
  int c;
  char salida;
  c=0;
  int ang;
  while (c==0)
  {
    printf("\n cual es el valor del anulo en grados? "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %i",&ang);
    printf("\n el valor  del coseno es de %f",coseno(ang));
    printf("\n desea volver a calcular otro coseno? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}