#include <stdio.h>
#include <string.h>


void inicializarTablero(int t[][5]);
void colocarBarcos(int t[][5]);
void mostrarTablero(int t[][5]);
int procesarDisparo(int t[][5], int f, int c);

int main() {
    int tablero[5][5];
    int fila, columna;
    char jugador[20];

    printf("Nombre: ");
    fgets(jugador, sizeof(jugador), stdin);

    // Limpiamos el salto de linea de fgets
    int longitud = strlen(jugador);
    if (longitud > 0 && jugador[longitud - 1] == '\n') {
        jugador[longitud - 1] = '\0';
    }



    inicializarTablero(tablero);
    colocarBarcos(tablero);

    printf("\n--- BATALLA NAVAL INICIADA ---\n");
    mostrarTablero(tablero);


    for(int turno = 0; turno < 5; turno++) {
        printf("\nTurno %d de %s -> ", turno + 1, jugador);
        printf("Fila (0-4): ");
        scanf("%d", &fila);
        printf("Columna (0-4): ");
        scanf("%d", &columna);

        // Validamos coordenadas antes de enviar a la funcion
        if (fila < 0 || fila >= 5 || columna < 0 || columna >= 5) {
            printf("Coordenadas invalidas. Perdiste el tiro.\n");
            continue;
        }


        procesarDisparo(tablero, fila, columna);


        printf("\nMapa de impactos actual:\n");
        mostrarTablero(tablero);
    }

    printf("\nJuego terminado. Buen intento, %s!\n", jugador);
    return 0;
}


// Funcion para llenar la matriz de ceros
void inicializarTablero(int t[][5]) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            t[i][j] = 0;
        }
    }
}


void colocarBarcos(int t[][5]) {
    t[1][2] = 1;
    t[3][4] = 1;
    t[0][0] = 1;
}


void mostrarTablero(int t[][5]) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(t[i][j] == 0 || t[i][j] == 1) {
                printf("~ "); // Agua oculta o Barco oculto
            } else if(t[i][j] == 2) {
                printf("o "); // Agua disparada
            } else if(t[i][j] == 3) {
                printf("X "); // Impacto exitoso
            }
        }
        printf("\n");
    }
}


int procesarDisparo(int t[][5], int f, int c) {
    if (t[f][c] == 3 || t[f][c] == 2) {
        printf("¡Ya habias disparado aqui!\n");
        return 0; // No pasa nada
    }
    else if (t[f][c] == 1) {
        printf("¡IMPACTO!\n");
        t[f][c] = 3; // Cambia a estado dañado
        return 1;
    }
    else {
        printf("Agua...\n");
        t[f][c] = 2; // Cambia a estado agua disparada
        return 0;
    }
}
