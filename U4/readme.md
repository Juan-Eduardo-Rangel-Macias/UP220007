# Problem
Make a tick tack tow

# Code
```
#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

void cls() {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { 0, 0 };
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y,
                               coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}

void gotoxy(int x, int y) {
    HANDLE hconsola;
    COORD Wpos;
    Wpos.X = x;
    Wpos.Y = y;
    hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hconsola, Wpos);
}
int main(){
  int casillas=0;

	char matriz[3][3], opc;
	int i, j;

	printf("Juego del gato!\n");


	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j]=' ';
			printf("[%c]", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n\nPresione Y para jugar / N para salir: ");
	scanf("%c", &opc);

	int fila, col, ganador=0, turno=1;

	if(opc == 'Y' || opc == 'y'){

		do{
			if(turno%2==1){
				do{
					printf("\nJugador 1: \n");
					printf("Digite fila: ");
					scanf("%d", &fila);
					printf("Digite columna: ");
					scanf("%d", &col);
          fila=fila-1;
          col=col-1;
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2){
						printf("\nCoordenadas no validas, pruebe otra vez.\n");
					}
				}while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);

				matriz[fila][col]='x';

				system("cls");
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
        casillas++;
			} else if(turno%2==0){
				do{
					printf("\nJugador 2: \n");
					printf("Digite fila: ");
					scanf("%d", &fila);
					printf("Digite columna: ");
					scanf("%d", &col);
          fila=fila-1;
          col=col-1;
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2){
						printf("\nCoordenadas no validas, pruebe otra vez.\n");
					}
				} while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);

				matriz[fila][col]='o';

				system("cls");
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
        casillas++;
			}
      if(casillas==9){
        cls();
        printf("jugo terminado  nadie gana resultado empate");
        ganador=1;
        casillas=0;
      }

			if(matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;
				printf("\nFelicidades! Gano el jugador 1.\n");
			}

			if(matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;
				printf("\nFelicidades! Gano el jugador 2.\n");
			}

		} while(ganador != 1);
	} else {
		system("cls");
		printf("\nDe todas formas no queria que jugaras.\n");
	}

	return 0;
}
```
# Diagram

![alt](https://github.com/UP210635/UP210635_CPP/raw/main/U4/captura.jpeg)
![alt](https://github.com/UP210635/UP210635_CPP/raw/main/U4/captura1.jpeg)
![alt](https://github.com/UP210635/UP210635_CPP/raw/main/U4/captura2.jpeg)
![alt](https://github.com/UP210635/UP210635_CPP/raw/main/U4/captura3.jpeg)
![alt](https://github.com/UP210635/UP210635_CPP/raw/main/U4/captura4.jpeg)
![alt]()
![alt]()




