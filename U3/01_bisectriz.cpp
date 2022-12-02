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
//#include<stdlib.h>

const double E=2.718281828;

// uso del namespace para evitar el std::
using namespace std;
long long int eqn(int x){
  double d;
  d = pow(x,2)+8*x+15;
  return d;
}
int main()
{
  int c;
  char salida;
  c=0;
  int x;
  while (c==0)
  {
    x=0;
    for (int i = -20; i < 21; i++)
    {
      x = eqn(i);
      printf("\nel valor de la ecuacion en x = %d es: %d",i,x);
    }
    
    printf("\n desea volver a calcular la ecuacion? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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