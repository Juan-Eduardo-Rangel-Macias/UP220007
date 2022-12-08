/*********************************************************************
Unidad 
Juan Eduardo Rangel Macias UP220007 
 / /2022                     ISC03A
Realizar 
*********************************************************************/

// libreria para manejo de entradas

// libreria para uso de scanf y print f
//#include<stdlib.h>
#include "libro.h"

vector<int> anteriorf(int discos, int soporte_inicial,int soporte_final, int soporte_auxiliar,int mov,int contar){
  vector<int>anterior;
  anterior.reserve(mov);
    if (discos==1)
  {
    anterior.push_back(soporte_inicial);
  }else
  {
    anteriorf(discos-1,soporte_inicial,soporte_auxiliar, soporte_final,mov,contar);
    anterior.push_back(soporte_inicial);
    anteriorf(discos-1,soporte_auxiliar,soporte_final,soporte_inicial,mov,contar);
  }
  return anterior;
}

vector<int> siguientef(int discos, int soporte_inicial,int soporte_final, int soporte_auxiliar,int mov,int contar){
  vector<int>anterior;
  anterior.reserve(mov);
    if (discos==1)
  {
    anterior.push_back(soporte_final);
  }else
  {
    siguientef(discos-1,soporte_inicial,soporte_auxiliar, soporte_final,mov,contar);
    anterior.push_back(soporte_final);
    siguientef(discos-1,soporte_auxiliar,soporte_final,soporte_inicial,mov,contar);
  }
  return anterior;
}

void movimientos(int discos, int soporte_inicial,int soporte_final, int soporte_auxiliar,int mov,int contar){
  if (discos==1)
  {
    printf("%i mover a %i\n",soporte_inicial,soporte_final);
  }else
  {
    movimientos(discos-1,soporte_inicial,soporte_auxiliar, soporte_final,mov,contar);
    printf("%i mover a %i\n",soporte_inicial,soporte_final);
    movimientos(discos-1,soporte_auxiliar,soporte_final,soporte_inicial,mov,contar);
  }
}

int calcular_movimientos(int discos){
  return pow(2,discos)-1;
}


int main()
{
  int c;
  char salida;
  c=0;
  int discos;
  int soporte_auxiliar;
  int soporte_final;
  int soporte_inicial;
  int mov;
  int contar;
  vector<int> anterior;
  vector<int> siguiente;
  while (c==0)
  {
    discos=0;
    mov=0;
    contar=0;
    printf("¿cuantos discos tienes?");
    scanf( " %d",&discos);
    int tablero[discos+1][3];
    char* representacion[discos+1][3];
    printf("¿cual es tu pilar inicial?");
    scanf( " %i",&soporte_inicial);
    printf("¿cual es tu pilar final?");
    scanf( " %i",&soporte_final);
    printf("¿cual es tu pilar auxiliar?");
    scanf( " %i",&soporte_auxiliar);
    mov=calcular_movimientos(discos);
    printf("total de movimientos %d\n",mov);
    movimientos(discos,soporte_inicial,soporte_final,soporte_auxiliar,mov,contar);
    anterior=anteriorf(discos,soporte_inicial,soporte_final,soporte_auxiliar,mov,contar);
    siguiente=siguientef(discos,soporte_inicial,soporte_final,soporte_auxiliar,mov,contar);
    copy(anterior.begin(),anterior.end(),
          std::ostream_iterator<int>(cout," |  "));
    printf("\n");
    copy(siguiente.begin(),siguiente.end(),
          std::ostream_iterator<int>(cout," |  "));
    printf("\n");
    //Sleep(6000);
    //clrscr();
    printf("\n desea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  getchar();
  return 0;
}