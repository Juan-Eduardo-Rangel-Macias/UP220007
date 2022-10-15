# Codigos de ka unidad 1 

## Codigo 01 Hola mundo

### Explicación o Problema
En este codigo se realiza lel hola mundo o una imprsion de un mensaje con uso del comando 
```cout```

```
#include <iostream>
using namespace std;

int main(){
    cout << "hola mundo que tal todo todo aqui esta bien me despido todo genial y todo correcto" << endl;
    getchar();
    return 0;
}
```

![cresultad](https://i.imgur.com/L85ZBvG.png)

## Código 02 par o impar

### Explicación o Problema
En este código realizaremos la impresión de la palabra par o impar

### Codigo
```
#include <iostream>
using namespace std;
int main()
{
    cout << "par o impar" << endl << "\n" <<endl;
    getchar();
    return 0;
}
```
### Resultado 
![resultado](https://i.imgur.com/dUA5YW3.png)

## Codigo 0 Tipos de datos 

### Explicación o Problema
En este codigo se analizan los tipos de variables y el como se usan 

### Codigo
```
/*********************************************************************
    Unidad 1. Tipos de datos
    Juan Eduardo Rangel Macias
    15/09/2022
    mostrar distintos tipos de datos en c++
*********************************************************************/

//libreria para manejo de entradas
#include <iostream>
//libreria para uso de scanf y print f
#include <stdio.h>

//uso del namespace para evitar el std::
using namespace std;

//FUincion principal de tipo entero
int main()
{
    int entero = 2147483647;
    float flotante = 3.4e38;
    double grande = 2.565465654654;
    char caracter = '@';

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "el numero entero es: " << entero << endl;
    cout << "el tamaño del numero entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "el numero caracter es: " << caracter<< endl;
    cout << "el tamaño del numero caracter es: " << sizeof(caracter) << "bytes" << endl;
    //cout << "el numero flotante es: " << flotante << endl;
    //getchar();
    return 0;
}
```
### Resultado 
![resultado](https://i.imgur.com/iD3l5e8.png)

## Codigo 04 ciclos

### Explicación o Problema
En estae codigo se aprende el uso de cliclos 

### Codigo
```
/*********************************************************************
    Unidad 1. Tipos de datos
    Juan Eduardo Rangel Macias
    15/09/2022
    mostrar distintos tipos de datos en c++
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>
// libreria para uso de scanf y print f
#include <stdio.h>

// uso del namespace para evitar el std::
using namespace std;

// FUincion principal de tipo entero
int main()
{
    int n = 10;
    int suma = 0;
    int sumap = 0;
    int suman = 0;
    int sumat = 0;
    for (size_t i = 0; i <= n; i++)
    {
        if (i != 3)
        {
            printf("valor del contador %d \n", i);
        }
        suma = suma + i;
        if (i % 2 == 0)
        {
            sumap = sumap + i;
        }
        else if (i % 2 == 1)
        {
            suman = suman + i;
        }
        sumat = suman + sumap;
    }
    printf("la suma fue de: %d\n", suma);
    printf("la suma de los pares fue de: %d\n", sumap);
    printf("la suma de los impares fue de: %d\n", suman);
    printf("la suma de pares e impares fue de: %d\n", sumat);
    getchar();
    return 0;
}
```
### Resultado 
![resultado](https://i.imgur.com/Wqgjzkd.png)
## Codigo 05 Edades

### Explicación o Problema
Se realizara un codigo que distinga entre las distintas categorias de edades

### Codigo
```
/*********************************************************************
    Unidad 1. Renta
    Juan Eduardo Rangel Macias
    27/09/2022
    Realizar el sondeo de Rentas e indicar la cantidad de impuesto a pagar
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>

// libreria para uso de scanf y print f
#include <stdio.h>
//#include<stdlib.h>

// uso del namespace para evitar el std::
using namespace std;

int edades;
int c;
char salida;
int main()
{
    c = 0;
    salida = 's';
    while (c == 0)
    {
        printf("\nIntroduce tu edad: ");
        scanf(" %d", &edades);
        if (edades >= 1 && edades <= 150)
        {
            if (edades <= 30)
            {
                printf("Primera edad");
            }
            else if (edades >= 31 && edades <= 60)
            {
                printf("Segunda edad");
            }
            else if (edades >= 61 && edades <= 90)
            {
                printf("Tercera edad");
            }
            else
            {
                printf("Horas extra");
            }
        }
        else if (edades < 1 || edades > 150)
        {
            printf("rango invalido");
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
![resultado](https://i.imgur.com/QUs6ihk.png)