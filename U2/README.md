# Codigos Unidad 2 


## Codigo 01 Renta

### Explicación o Problema
![problema1](https://i.imgur.com/6deQxkF.png)

### Codigo
```
/*********************************************************************
Unidad 2. Renta
Juan Eduardo Rangel Macias
27/9/2022
Realizar el control de rente e impuestos
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

int renta = 0;
float rentad = 0;
float impuesto = 0;
int c;
char salida;
int main()
{
  c = 0;
  salida = 's';
  while (c == 0)
  {
    printf("\nIntroduce tu Renta para determinar tu Impuesto: ");
    scanf(" %d", &renta);
    if (renta >= 0)
    {
      if (renta < 10000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 5% ");
        impuesto = renta * 0.05;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.05;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
      else if (renta >= 10000 && renta < 20000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 15% ");
        impuesto = renta * 0.15;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.15;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
      else if (renta >= 20000 && renta < 35000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 20% ");
        impuesto = renta * 0.2;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.2;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
      else if (renta >= 35000 && renta < 60000)
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 30% ");
        impuesto = renta * 0.3;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.3;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }

      else
      {
        printf("\nsu renta es de $%d", renta);
        printf("\nsu impuesto es del 45% ");
        impuesto = renta * 0.45;
        printf("\nsu impuesto a pagar es de $%.2f", impuesto);
        rentad = renta * 1.45;
        printf("\nsu renta con impuesto es de $%.2f", rentad);
      }
    }
    else if (renta < 0)
    {
      printf("su renta no puede ser procesada");
    }

    printf("\nDeseas continuar? s=si n =no: ");
    scanf(" %c", &salida);
    if (salida == 'n' || salida == 'N')
    {
      printf("\nPase un excelente dia");
      c = 1;
    }
    else if (salida == 's' || salida == 'S')
    {
      c = 0;
    }
  }
  printf("\nAdios");
  getchar();
  getchar();
  return 0;
}
```
### Resultado 
![resultado](https://i.imgur.com/NCV9T7c.png)

## Codigo 02 Evaluación de empresas

### Explicación o Problema
![problema](/https://i.imgur.com/IKyeaNe.pn)

### Codigo
```
/*********************************************************************
Unidad 2 evaluacion empresas
Juan Eduardo Rangel Macias UP220007 
10/10/2022                   ISC03A
Realizar el calculo del bono de un empleado basandose en el rendimiento dle mismo
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
  float bono;
  float calidad = 0.0;
  int a;
  int c;
  char salida;
  c=0;
  while (c==0)
  {
    printf("\n¿Cual es su resultado de la evaluacion? ");
    scanf(" %f",&calidad);
    //a = calidad * 10;
    if (calidad == 0.0f)
    {
      printf("\nSu rango como empleado es Inaceptable");
      printf("\nSu resultado de la evaluacion fue %.2f",calidad);
      bono = calidad * 2400;
      printf("\nSsu bono es de $%.2f",bono);
    }
    else if (calidad == 0.4f)
    {
      printf("\nSu rango como empleado es Aceptable");
      printf("\nSu resultado de la evaluacion fue %.2f",calidad);
      bono = calidad * 2400;
      printf("\nSsu bono es de $%0.2f",bono);
    }
    else if (calidad >= 0.6f)
    {
      printf("\nSu rango como empleado es Meritorio");
      printf("\nSu resultado de la evaluacion fue %.2f",calidad);
      bono = calidad * 2400;
      printf("\nSsu bono es de $%.2f",bono);
    }
    
    printf("\n¿desea volver a calcular su bono? s/n");
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
```
### Resultado 
![resultado](https://i.imgur.com/Dd5bBV3.png)

## Codigo 03 Salade juegos 

### Explicación o Problema
![resultados](https://i.imgur.com/HmGJWZt.png)

### Codigo
```
/*********************************************************************
Unidad 2 sala de juegos
Juan Eduardo Rangel Macias UP220007
10/10/2022                   ISC03A
Realizar el generador de precios de una sala de juegos
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
  int edad = 0;
  c = 0;
  while (c == 0)
  {
    printf("\nIntroduzca su edad ");
    scanf(" %d", &edad);
    if (edad >= 0 && edad < 4)
    {
      printf("\nSu edad es de %d", edad);
      printf("\nEl costo de su boleto es de $0 entra gratis");
      printf("\nEsperemos pase un excelente dia disfrute su esancia");
    }
    else if (edad >= 4 && edad < 18)
    {
      printf("\nSu edad es de %d", edad);
      printf("\nEl costo de su boleto es de $5");
      printf("\nEsperemos pase un excelente dia disfrute su esancia");
    }
    else if (edad >= 18)
    {
      printf("\nSu edad es de %d", edad);
      printf("\nEl costo de su boleto es de $10");
      printf("\nEsperemos pase un excelente dia disfrute su esancia");
    }
    else
    {
      printf("\n su edad no es valida vuelva a introducirla");
    }

    printf("\nDesea pagar otro voleto de entrada? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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
```
### Resultado 
![resultado](https://i.imgur.com/uM59z8k.png)

## Codigo 04 Pizzeria

### Explicación o Problema
![problema](https://i.imgur.com/ThjKsX5.png)

### Codigo
```
/*********************************************************************
Unidad 2 pizeria
Juan Eduardo Rangel Macias UP220007 
10/10/2022                   ISC03A
Realizar el menu de una pizaria
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
```
### Resultado 
![resultado](https://i.imgur.com/gLRjBKn.png)

## Codigo 05 promedio

### Explicación o Problema
![problema](https://i.imgur.com/3QbjWo2.png)

### Codigo
```
/*********************************************************************
Unidad 2 promedios
Juan Eduardo Rangel Macias UP220007 
10/19/2022                   ISC03A
Realizar el promediado y obtencion del dato mayor y dato menor de una serie de datos
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
  int temperatura[7];
  int a;
  int dme;
  int dma;
  int i;
  int suma;
  float promedio;
  c=0;
  dma = 0;
  dme = 0;
  suma = 0;
  promedio = 0.0;
  while (c==0)
  {
    printf("\nBienvenido al sensador de temperaturas");
    for ( i = 0; i < 6; i++)
    {
      printf("\nintroduzca la temperatura #%d ",i+1);
      scanf(" %d",&temperatura[i]);
      if (i == 0)
      {
        dme = temperatura[i];
      }
      
    }
    for ( i = 0; i < 6; i++)
    {
      if (temperatura[i] < dme)
      {
        dme = temperatura[i];
      }
      if (temperatura[i] > dma)
      {
        dma = temperatura[i];
      }
      suma = suma + temperatura[i];
    }
    promedio = suma / 6 ;
    printf("\nLa temperatura menor es %d grados",dme);
    printf("\nLa temperatura menor es %d grados",dma);
    printf("\nEl promerio de las temperaturas es de %f grados",promedio);
    
    printf("\nDesea volver a calcular tu promedio? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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
```
### Resultado 
![resultado](https://i.imgur.com/5PYJTsL.png)

## Codigo 06 productos

### Explicación o Problema
![problema](https://i.imgur.com/fQVipZX.png)

### Codigo
```
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

int main()
{
  int c;
  int a = 1;
  char salida;
  c = 0;
  int d = 1;
  int total = 0;
  int producto = 0;
  while (c == 0)
  {
    producto = 1;
    while (a == 1)
    {
      producto = 0;
      printf("\nIntrodusca el presio de s producto #%d $ ", d);
      scanf(" %d", &producto);
      if (producto == 0)
      {
        a = 0;
      }
      total = total + producto;
      d++;
    }
    printf("\nel total de su compra fue $ %d", total);
    
    printf("\ndesea volver a calcular su bono? s/n "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c", &salida);
    if (toupper(salida) == 'S')
    {
      c = 0;
      a = 1;
    }
    if (toupper(salida) == 'N')
    {
      c = 1;
    }
  }

  getchar();
  return 0;
}
```
### Resultado 
![resultado](https://i.imgur.com/pmTv0HY.png)

## Codigo 07 binario a decimal

### Explicación o Problema
![problema](https://i.imgur.com/ELOF3w0.png)

### Codigo
```
/*********************************************************************
Unidad 2 binario a decimal
Juan Eduardo Rangel Macias UP220007 
11/10/2022                   ISC03A
Realizar la conversion de un numero binario a decimal
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
#include <math.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

int main()
{
  int c;
  char salida;
  c=0;
  int bin;
  int bincon;
  int deci;
  int d=1;
  int e=0;
  int potencia=0;
  while (c==0)
  {
    potencia = 0;
    deci = 0;
    printf("\nIntroduve el numero binario que deseas convertir ");
    scanf(" %d",&bin);
    bincon = bin;
    c=1;
    while (bincon != 0) 
    {
      if (potencia == 0 && bincon%10 ==1)
        {
          deci = deci + 1;
        }
      else
      {
        deci = deci + ((bincon % 10) * pow(2,potencia));
      }
      bincon = bincon/10;
      potencia++;
      
    } 
    printf("\nsu numero binario es %d que en decimal es %d", bin, deci);
    
    
    
    printf("\ndesea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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
```
### Resultado 
![resultado](https://i.imgur.com/2HNfsEQ.png)