/*********************************************************************
Unidad funciones
Juan Eduardo Rangel Macias UP220007 
20/10/2022                   ISC03A
Realizar  convertir de un algoritmo a una función 
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
#include <math.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;
int f = 0;
int formulaso(int x1, int x2){
  float Xnew;
  do
  {
    Xnew = (x1 + x2)/2;
    if (x1 * x2 < 0)
    {
      x2 = Xnew;
    }
    else
    {
      x1 =Xnew;
    }
    f= f + 1;
  } while ((fabs((x1 -x2)/Xnew) < 0.001f ) || (Xnew == 0));
  
  return Xnew;
}

int main()
{
  int c;
  char salida;
  c=0;
  int x1;
  int x2;
  float valor;
  
  while (c==0)
  {
    f=0;
    printf("que valor deseas para x1");
    scanf(" %d", &x1);
    printf("que valor deseas para x2");
    scanf(" %d", &x2);
    valor = formulaso(x1,x2);
    printf("el resultado es %f repitiendose %d", valor,f);
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