/*********************************************************************
Unidad 2 
Juan Eduardo Rangel Macias UP220007 
10/10/2022                     ISC03A
Realizar 
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

int main()
{
  int c;
  char salida;
  int seleccion = 0;
  int ingrediente = 0;
  c=0;
  while (c==0)
  {
    printf("\nBienvenido a la pizzeria Bella Napoli de que tipo de pizza le gustaria ordenar?");
    printf("\n1 Vegetaria");
    printf("\n2 No vegetariana \n");
    scanf(" %d",&seleccion);
    if (seleccion == 1)
    {
      printf("\n Que ingrediente le gustaria?");
      printf("\n1 Pimiento");
      printf("\n2 Tofu\n");
      scanf(" %d",&ingrediente);
      if (ingrediente == 1)
      {
        printf("\nSu pizza es una Vegetariana");
        printf("\nSus ingredientes son");
        printf("\nMozzarella");
        printf("\nTomate");
        printf("\nPimiento");
        printf("\nGracias por su compra\n");
      }
      else if (ingrediente == 2)
      {
        printf("\nSu pizza es una Vegetariana");
        printf("\nSus ingredientes son");
        printf("\nMozzarella");
        printf("\nTomate");
        printf("\nTofu");
        printf("\nGracias por su compra\n");
      }
      else
      {
        printf("\nSu seleccion no es valida vuelva a ordenar\n");
      }
      
    }
    else if (seleccion == 2)
    {
      printf("\n Que ingrediente le gustaria?");
      printf("\n1 Peperoni");
      printf("\n2 Jamon");
      printf("\n3 Salmon\n");
      scanf(" %d",&ingrediente);
      if (ingrediente == 1)
      {
        printf("\nSu pizza es una No Vegetariana");
        printf("\nSus ingredientes son");
        printf("\nMozzarella");
        printf("\nTomate");
        printf("\nPeperoni");
        printf("\nGracias por su compra\n");
      }
      else if (ingrediente == 2)
      {
        printf("\nSu pizza es una No Vegetariana");
        printf("\nSus ingredientes son");
        printf("\nMozzarella");
        printf("\nTomate");
        printf("\nJamón");
        printf("\nGracias por su compra\n");
      }
      else if (ingrediente == 3)
      {
        printf("\nSu pizza es una No Vegetariana");
        printf("\nSus ingredientes son");
        printf("\nMozzarella");
        printf("\nTomate");
        printf("\nSalmon");
        printf("\nGracias por su compra\n");
      }
      else
      {
        printf("\nSu seleccion no es valida vuelva a ordenar\n");
      }
      
    }
    else
    {
      printf("\nseleccion no valida\n");
    }
    
    printf("\n desea comprar otra pizza? s/n "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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