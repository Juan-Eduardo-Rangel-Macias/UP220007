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
  string nombre = "";
  string apellidoP = "";
  string apellidoM = "";
  string fe = "";
  string  rfc = "";
  int p = 0;
  while (c == 0)
  {
    nombre.clear();
    apellidoM.clear();
    apellidoP.clear();
    fe.clear();
    rfc.clear();
    printf("\nintroduce tu nombre\n");
    cin >> nombre;
    printf("\nintroduce tu apellido paterno\n");
    cin >> apellidoP;
    printf("\nintroduce tu apellido materno\n");
    cin >> apellidoM;
    printf("\nintroduce tu fecha de nacimiento\n");
    cin >> fe;
    int v = nombre.length();
    rfc = rfc + apellidoP[0];

    for (int i = 1; i < v && p < 1; i++)
    {
      if (apellidoP[i] == 'a' || apellidoP[i] == 'e' || apellidoP[i] == 'i' || apellidoP[i] == 'o' || apellidoP[i] == 'u')
      {
        rfc = rfc + apellidoP[i];
        p++;
      }
    }

    int d1 = fe.find_last_of("/");
    int d2 = fe.find("/");
    rfc = rfc + apellidoM[0] + nombre[0] + fe.substr(d1 + 1, 4) + fe.substr(d2 + 1, 2) + fe.substr(0, 2);

    v = rfc.length();
    for (int i = 0; i < v; i++)
    {
      rfc[i] = toupper(rfc[i]);
    }
    cout << nombre << " RFC: " << rfc;
    
    printf("\n desea volver a calcular su RFC? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c", &salida);
    c = exit(salida);
  }

  getchar();
  return 0;
}