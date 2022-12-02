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
#include <time.h>
#include "libro.h"
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
    bool r = true;
    printf("ingrese un numero");
    unsigned long long int numero;
    scanf(" %d",&numero);
    printf("ingrese un numero");
    int numero2;
    scanf(" %d",&numero2);
    printf("%i",factorial(numero));
    printf(" desea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}