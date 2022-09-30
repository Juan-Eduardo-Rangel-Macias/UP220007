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