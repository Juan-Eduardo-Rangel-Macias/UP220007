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

int main()
{
  int c;
  char salida;
  c = 0;
  while (c == 0)
  {
    int numero, unidades, decenas, centenas, millares;
    char *UNIT[12]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    char *DECI[12]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char *CENTE[12]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    char *MILI[12]={"","M","MM","MMM"};
    

    printf("\nIngrese un numero");
    scanf(" %d",&numero);

    unidades = numero % 10;
    numero /= 10;
    decenas = numero % 10;
    numero /= 10;
    centenas = numero % 10;
    numero /= 10;
    millares = numero % 10;
    numero /= 10;
    printf("%s",MILI[millares]);
    printf("%s",CENTE[centenas]);
    printf("%s",DECI[decenas]);
    printf("%s",UNIT[unidades]);
    printf("\n");

    printf("\n desea volver aconvertir otro numero a romano? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c", &salida);
    c = exit(salida);
  }

  getchar();
  return 0;
}