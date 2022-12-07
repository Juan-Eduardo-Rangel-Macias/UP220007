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
  float ern;
  float era;
  era=0.0;
  ern=0.0;
  valor=0.0;
  float i;
  float er;
  er=0.000001;
  i=0.0;
  while ((ern - valor >= er||i <= 3.0)){
    ern=valor;
    valor=valor+pow((-1),i)* (powf(rad(anuglo),(2.0*i))/factorial(2*i));
    i++;
  };
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