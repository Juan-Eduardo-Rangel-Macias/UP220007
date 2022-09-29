# Codigos realizados en **C++** para la UNIDAD 1
## citas
> Clase de Programacion ISC03A

---

> Autor: Juan Eduardo Rangel Macias

---

> Maestro Juan Carlos

---
## listas 
1. unidad
2. unidad
3. unidad
## listas con html 
<li>elemento 2</li>
  <ol>
  <li>SUBELEMENTO 1</li>
    <OL>
      <LI style="list-style-type: lower-greek ;">SUB CATEGORIA 1</LI>
      <LI style="list-style-type: lower-greek ;">SUB CATEGORIA 2</LI>
    </OL>
      <li>SUBELEMENTO 2</li>
        <OL>
          <LI style="list-style-type: lower-greek ;">SUB CATEGORIA 1</LI>
          <LI style="list-style-type: lower-greek ;">SUB CATEGORIA 2</LI>
  </OL>
</ol> 

## listas no ordenadas  
- elemento 1 
- elemento 2

* elemento 2 
* elemento 3

## demostraciones de codivo 
```
/*********************************************************************
Unidad 2 Alfabeto 
Juan Eduardo Rangel Macias UP220007
28/9/2022                    ISC03A
Realizar la impresion de un alfabeo
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;
// for del 10 al 1 alfabeto ida y benida y mayusculas

int f;
char cadena[29] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', '@', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main()
{
  printf("\n");
  for (f = 0; f <= 26; f++)
  {
    printf("%c, ", cadena[f]);
  }
  printf("\n");
  for (f = 26; f >= 0; f--)
  {
    printf("%c, ", cadena[f]);
  }
  printf("\n");
  for (f = 0; f <= 26; f++)
  {
    printf("%c, ", toupper(cadena[f]));
  }
  printf("\n");
  for (f = 1; f <= 10; f++)
  {
    printf("%d, ", f);
  }

  getwchar();
  return 0;
}
```
## imagenes
![SCP](../lenguaje%20html/primer_pagina_html/imagenes/SCP.gif "SCP")
<div align="center">
<img alt="keter" src="../lenguaje%20html/primer_pagina_html/imagenes/KETTER.jpeg" width="400" />
</div>
