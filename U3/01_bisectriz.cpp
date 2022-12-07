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

const double E = 2.718281828;

// uso del namespace para evitar el std::
using namespace std;
double FuncionEcuacion1(double x)
{
  return (pow(x, 2) - 8 * x + 15);
}
int main()
{
  int c;
  char salida;
  c = 0;
  double x1 = -10;
  double x2 = 4.5;
  double xm, y1, y2;
  double Es = 0.00001;
  double Er = abs(x2 - x1);
  int i = 1;
  while (c == 0)
  {
    while (Er > Es)
    {
      xm = (x1 + x2) / 2;
      y1 = FuncionEcuacion1(x1);
      y2 = FuncionEcuacion1(xm);
      if (y1 * y2 < 0)
      {
        x2 = xm;
      }
      else
      {
        x1 = xm;
      }
      Er = abs(x2 - x1);
      i = i + 1;
    }
    printf("elvalor de i es igual a  %d  y su raiz calculada fue de %f", i, xm);
    printf("\n desea volver a calcular la ecuacion? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c", &salida);
    if (toupper(salida) == 'S')
    {
      c = 0;
    }
    if (toupper(salida) == 'N')
    {
      c = 1;
    }
  }

  getchar();
  return 0;
}