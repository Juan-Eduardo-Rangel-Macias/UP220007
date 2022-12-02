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

float media(int n[], int c){
  float med;
  med=0.0;
  for (int i = 0; i < c; i++)
  {
    med=med+n[i];
  }
  med=med/c;
  return med;
}

float sumatoria(int c[], int d){
  float sum;
  sum = 0.0;
  for (int i = 0; i < d; i++)
  {
    sum = sum + powf((c[i]-media(c,d)),2.0);
  }
  return sum;
}

float desviacion(int c[], int d){
  return powf((sumatoria(c,d)/d),0.5);
}

float desviacionm(int c[], int d){
  return powf((sumatoria(c,d)/(d-1)),0.5);
}

int main()
{
  int c;
  char salida;
  c=0;
  int dato;
  while (c==0)
  {
    printf("\n cuantos datos vamos a tratar? ");
    scanf(" %i",&dato);
    int datos[dato];
    for (int i = 0; i < dato; i++)
    {
      printf("\n dame el dato %d:  ",i+1);
      scanf(" %i",&datos[i]);
    }
    printf("\n la media es de %f",media(datos,dato));
    printf("\n la media es de %f",sumatoria(datos,dato));
    printf("\n la media es de %f",desviacion(datos,dato));
    printf("\n la media es de %f",desviacionm(datos,dato));
    printf("\n desea volver a calcular las desviaciones de probabilidad? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}