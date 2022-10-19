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
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

double ecu(int n){
  double ecuacion;
  ecuacion = pow(n,2) - (8*n) + 15;
  return ecuacion;
}

int main()
{
  int c;
  char salida;
  c=0;
  int min;
  int max;
  int n;
  int valor;
  double resultado;
  while (c==0)
  {
    printf("\nde que a que numero desea calcular los valores de la ecuacion?");
    printf("\nvalor minimo: ");
    scanf(" %d", &min);
    printf("\nvalor maximo: ");
    scanf(" %d", &max);
    for ( valor = min ; valor <= max; valor++)
    {
      
      resultado = ecu(valor);
      printf("\nel valor de la ecuacion en %d es de %d ", valor,resultado);
    }
    
    printf("\nDesea volver a calcular la ecuacion? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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