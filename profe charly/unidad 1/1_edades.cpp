#include<stdio.h>
#include<stdlib.h>
int edades;
int c;
char salida;
int main(){
    c=0;
    salida='s';
    while (c==0)
    {
        printf("\nIntroduce tu edad: ");
        scanf(" %d",&edades);
        if (edades>=1 && edades<=150)
        {
            if (edades<=30)
            {
                printf("Primera edad");
            }
            else if (edades>=31 && edades<=60)
            {
                printf("Segunda edad");
            }
            else if (edades>=61 && edades<=90)
            {
                printf("Tercera edad");
            }
            else
            {
                printf("Horas extra");
            }
        }
        printf("\nDeseas continuar? s=si n =no: ");
        scanf(" %c",&salida);
        if (salida=='n'||salida=='N' )
        {
            printf("Pase un excelente dia");
            c=1;
        }else if (salida=='s'||salida=='S' )
        {
            c=0;
        }
        
        
    }
    
}