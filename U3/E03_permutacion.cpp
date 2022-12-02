/*********************************************************************
Unidad 
Juan Eduardo Rangel Macias UP220007 
25/10/2022                     ISC03A
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
double permutaciones;
double combinaciones;
int n1;
int n2;
int tope;
int numero;

unsigned long long int factorial (int  tope){
  unsigned long long int nf;
  unsigned long long int factorial;
  nf=0;
  if (tope < 0 )
  {
    factorial=0;
  }
  else if (tope == 0)
  {
    factorial = 1;
  }
  else if (tope > 0)
  {
    if (nf==0)
    {
      factorial = 1;
      nf = 1;
    }
    for ( int i = 1; i <= tope; i++)
    {
      factorial = factorial * i;
    }
  }
  return factorial;
}

unsigned long long int permutacion(unsigned long long int n1, unsigned long long int n2){
unsigned long long int permutacion = factorial(n1) / (factorial(n1-n2));
  return permutacion;
}

unsigned long long int conbinacion(unsigned long long int n1, unsigned long long int n2){
unsigned long long int conbinacion = factorial(n1) / (factorial(n1-n2) * factorial(n2));
  return conbinacion;
}


int main()
{
  int c;
  char salida;
  c=0;
  unsigned long long int facto;
  unsigned long long int factor;
  while (c==0)
  {
    printf("\n que numero deceseas obtener la permutacion y combinacion? valor de n ");
    scanf(" %d", &n1);
    printf("\n  valor de r ");
    scanf(" %d", &n2);
    facto = permutacion(n1,n2);
    printf("\n la permutacion es: %i",facto);
    factor = conbinacion(n1,n2);
    printf("\n la conbinacion es: %i",factor);
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