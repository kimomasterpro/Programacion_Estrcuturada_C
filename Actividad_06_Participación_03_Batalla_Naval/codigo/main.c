
#include <stdio.h>

int main() {
    int tablero[5][5];
    int fila, columna;
        // Inicializar tablero
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
            tablero[i][j] = 0;
            }
        }
    // Colocar barcos manualmente
        tablero[1][2] = 1;
        tablero[3][4] = 1;
        tablero[0][0] = 1;


    // Mostrar tablero inicial
        for(int i = 0; i < 5; i++) {
                for(int j = 0; j < 5; j++) {
                    printf("~ ");
                    }
            printf("\n");
        }
    // Pedir disparo

             for(int turno = 0; turno < 5; turno++)

             {
                    printf("Fila: ");
                    scanf("%d", &fila);

                    printf("Columna: ");
                    scanf("%d", &columna);


          // evaluar si hay barco o agua
        if ( tablero [fila][columna] == 1){

            printf("impacto\n");
            tablero[fila][columna]=3;
        } else {
                printf("agua\n");
                tablero[fila][columna]=2;
                }


                for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {

                if(tablero[i][j] == 0 || tablero[i][j] == 1) {
                    printf("~ ");
                } else if(tablero[i][j] == 2) {
                    printf("o ");
                } else if(tablero[i][j] == 3) {
                    printf("X ");
                }

            }
            printf("\n");
        }
             }




    return 0;
    }
