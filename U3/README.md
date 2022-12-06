# Unit 3 readme functions and numeric métodos

In this unit we will see the rest of functions and libraries utilities 

## Code One bisectriz 

### Problem
Do the tabulation of one equation 
### Code 
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
#include <time.h>
//#include<stdlib.h>

const double E=2.718281828;

// uso del namespace para evitar el std::
using namespace std;
long long int eqn(int x){
  double d;
  d = pow(x,2)+8*x+15;
  return d;
}
int main()
{
  int c;
  char salida;
  c=0;
  int x;
  while (c==0)
  {
    x=0;
    for (int i = -20; i < 21; i++)
    {
      x = eqn(i);
      printf("\nel valor de la ecuacion en x = %d es: %d",i,x);
    }
    
    printf("\n desea volver a calcular la ecuacion? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
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

### Results
![results](https://i.imgur.com/MqTi2fF.png)

## Code Tow Is bisiesto 

### Problem
verified if one year asignated is "bisiesto"
### Code 
```
/*********************************************************************
Unidad 
Juan Eduardo Rangel Macias UP220007 
 / /2022                     ISC03A
Realizar 
*********************************************************************/

// libreria para manejo de entradas
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>

// uso del namespace para evitar el std::
using namespace std;

// libreria para uso de scanf y print f
//#include<stdlib.h>
#include "libro.h"

int bisiesto(int year){
  bool x = true;
  x = year%4;
  return x;
}


int main()
{
  int c;
  char salida;
  c=0;
  int year;
  year=0;
  while (c==0)
  {
    printf("\n que año deseas saber si es bisiesto? "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %i",&year);
    cout << bisiesto(year) << "|| 0=Si 1=No" <<endl;
    printf("\n desea volver a calcular otro year bisiesto? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}
```

### Results
![results](https://i.imgur.com/dSkAA6F.png)

## Code Three Coseno                

### Problem
Make the form of the standard desviation
### Code 
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
//#include<stdlib.h>
#include "libro.h"

float rad(int angulo){
  float radianes;
  radianes = (angulo*M_PI)/180.0;
  return radianes;
  }

float coseno(int anuglo){
  float valor;
  valor=0.0;
  for (float i = 0.0; i < 17.0; i++)
  {
    /*if (i==0)
    {
      valor=1;
    }
    else
    {
      valor=valor+pow((-1),i)*(pow((anuglo*M_PI)/180,(2*i))/factorial(2*i));
    }*/
    valor=valor+pow((-1),i)* (powf(rad(anuglo),(2.0*i))/factorial(2*i));
  }
  return valor;
}

int main()
{
  int c;
  char salida;
  c=0;
  int ang;
  while (c==0)
  {
    printf("\n cual es el valor del anulo en grados? "); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %i",&ang);
    printf("\n el valor  del coseno es de %f",coseno(ang));
    printf("\n desea volver a calcular otro coseno? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}
```

### Results
![results](https://i.imgur.com/6htc1GQ.png)

## Code Four standar desviation

### Problem
Make the return of the Money return for one numeric cuantitie 
### Code 
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
//#include<stdlib.h>
#include "libro.h"

float media(int n[], int c){
  float med;
  med=0.0;
  for (int i = 0; i < c; i++)
  {
    med=med+n[i];
  }
  med=med/c;
  return med;
}

float sumatoria(int c[], int d){
  float sum;
  sum = 0.0;
  for (int i = 0; i < d; i++)
  {
    sum = sum + powf((c[i]-media(c,d)),2.0);
  }
  return sum;
}

float desviacion(int c[], int d){
  return powf((sumatoria(c,d)/d),0.5);
}

float desviacionm(int c[], int d){
  return powf((sumatoria(c,d)/(d-1)),0.5);
}

int main()
{
  int c;
  char salida;
  c=0;
  int dato;
  while (c==0)
  {
    printf("\n cuantos datos vamos a tratar? ");
    scanf(" %i",&dato);
    int datos[dato];
    for (int i = 0; i < dato; i++)
    {
      printf("\n dame el dato %d:  ",i+1);
      scanf(" %i",&datos[i]);
    }
    printf("\n la media es de %f",media(datos,dato));
    printf("\n la media es de %f",sumatoria(datos,dato));
    printf("\n la media es de %f",desviacion(datos,dato));
    printf("\n la media es de %f",desviacionm(datos,dato));
    printf("\n desea volver a calcular las desviaciones de probabilidad? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}
```

### Results
![results](https://i.imgur.com/x3VW9NN.png)


## Code five Coins return 

### Problem
Make the return of the Money return for one numeric cuantitie 
### Code 
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
//#include<stdlib.h>
#include "libro.h"


int main()
{
  int c;
  char salida;
  int moneda;
  int residuo;
  int auxiliar;
  int retorno[10]={0,0,0,0,0,0,0,0,0,0};
  char *billetes[12]={"mil","quinientos","docientos","cien","cincuenta","veinte","diez","cinco","dos","un"};
  int money[10]={1000,500,200,100,50,20,10,5,2,1};
  residuo=0;
  c=0;
  auxiliar=0;
  moneda=0;

  while (c==0)
  {
    for (int i = 0; i < 10; i++)
    {
      retorno[i]=0;
    }
    
    printf("\ncual es la cantidad que deseas desglosar?");
    scanf(" %d",&moneda);
    residuo = moneda;
    while (residuo > 0)
    {
      for (int i = 0; i < 10; i++)
      {
        retorno[i] = residuo/money[i];
        auxiliar = retorno[i] *money[i];
        residuo = residuo - auxiliar ;
      }
      residuo = residuo - auxiliar ;
    }
    for (int i = 0; i < 10; i++)
    {
      if (retorno[i]==0)
      {}else{
        printf("\t\t%d de %s pesos",retorno[i],billetes[i]);
      }
    }
    
  printf("\n desea volver a deslosar otra moneda? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
  scanf(" %c",&salida);
  c = exit(salida);
  }
  getchar();
  return 0;
}
```

### Results
![results](https://i.imgur.com/1jKEjQ7.png)

## Code Six Arabic numeration to Roman numeration

### Problem
change the Arabic numeration to Roman numeration
### Code 
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
```

### Results
![results](https://i.imgur.com/RPuOnGH.png)

## Code Seven RFC generator  

### Problem
Make one generator of RFC
### Code 
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
```

### Results
![results](https://i.imgur.com/DH22Qzt.png)

## Code Eight Vector ordenación  

### Problem
Order a vector
### Code 
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
//#include<stdlib.h>
#include "libro.h"

void Orden(int x[], int v)
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

int main()
{
  int c;
  char salida;
  c=0;
  int datos;
  while (c==0)
  {
    printf("\n cuantos datos deseas ordenar? \n");
    scanf("%d",&datos);
    int d[datos];
    for (int i = 0; i < datos; i++)
    {
      printf("\nintroduce el numero: ");
      scanf(" %d",&d[i]);
    }
    
    int n=sizeof(d)/4;
    Orden(d,n);
    for (int i = 0; i < n; i++)
    {
      printf("%d,",d[i]);
    }
    
    printf("\n desea volver a calcular su bono? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }
  
  getchar();
  return 0;
}
```

### Results
![results](https://i.imgur.com/kVPhkqG.png)

## Code Nine Recursive function  

### Problem
Make  one recursive function 
### Code 
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
//#include<stdlib.h>
#include "libro.h"

int main()
{
  int c;
  char salida;
  c=0;
  while (c==0)
  {
    int tope;
    tope=0;
    unsigned long long int facto;
    facto=0;
    printf("\n ingresa un numero para el factorial");
    scanf(" %d",&tope);
    facto = factorialr(tope);
    printf("elfactorial %d  es: %d",tope,facto);
    printf("\n desea volver a calcular otro factorial? s/n"); // sustituir ' por comillas dobles en los printf y scanf y agregar el contrabarra n
    scanf(" %c",&salida);
    c = exit(salida);
  }

  
  getchar();
  return 0;
}

```

### Results
![results](https://i.imgur.com/ai3LR0x.png)

## librería "libro.h"

### Code
```
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

```

### Explication 
in this library are all the functions used in all the codes for simplifications reasons 