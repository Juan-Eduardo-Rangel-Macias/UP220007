/*********************************************************************
Unidad 
Juan Eduardo Rangel Macias UP220007 
 / /2022                     ISC03A
Realizar 
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>

// uso del namespace para evitar el std::
using namespace std;

// libreria para uso de scanf y print f
//#include<stdlib.h>
#include "libro.h"

int bisiesto(int year){
  bool x = true;
  x = year%4;
  return x;
}


int main()
{
  int c;
  char salida;
  c=0;
  int year;
  year=0;
  while (c==0)
  {
    printf("\n que año deseas saber si es bisiesto? "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %i",&year);
    cout << bisiesto(year) << "|| 0=Si 1=No" <<endl;
    printf("\n desea volver a calcular otro year bisiesto? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}