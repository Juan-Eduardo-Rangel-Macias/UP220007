#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
// uso del namespace para evitar el std::
using namespace std;

int exit(char ssalida)
{
  int c;
  if (toupper(ssalida) == 'S')
  {
    c = 0;
  }
  if (toupper(ssalida) == 'N')
  {
    c = 1;
  }
  return c;
}

unsigned long long int factorial(int tope)
{
  unsigned long long int nf;
  unsigned long long int factorial;
  nf = 0;
  if (tope < 0)
  {
    factorial = 0;
  }
  else if (tope == 0)
  {
    factorial = 1;
  }
  else if (tope > 0)
  {
    if (nf == 0)
    {
      factorial = 1;
      nf = 1;
    }
    for (int i = 1; i <= tope; i++)
    {
      factorial = factorial * i;
    }
  }
  return factorial;
}

unsigned long long int permutacion(unsigned long long int n1, unsigned long long int n2)
{
  unsigned long long int permutacion = factorial(n1) / (factorial(n1 - n2));
  return permutacion;
}

unsigned long long int conbinacion(unsigned long long int n1, unsigned long long int n2)
{
  unsigned long long int conbinacion = factorial(n1) / (factorial(n1 - n2) * factorial(n2));
  return conbinacion;
}

unsigned long long int factorialr(int tope)
{
  if (tope == 1)
  {
    return 1;
  }
  else
  {
    return tope * factorial(tope - 1);
  }
}

void Ordenar(int x[], int v)
{
  int m, s, c;
  do
  {
    c = 0;
    for (int i = 0; i < v; i++)
    {
      s = i + 1;
      if (x[i] > x[s])
      {
        m = x[s];
        x[s] = x[i];
        x[i] = m;
        c++;
      }
    }

  } while (c > 0);
}