#include <stdio.h>
#include <string.h>

int main() {
    char jugadores[2][20];
    char barcos[2][5][5][15]; // <-- FIX: 4 dimensiones [jugador][fila][col][nombre]

    int tablero[2][5][5];
    int fila, columna;

    // ── Pedir nombres ────────────────────────────────────────────
    printf("=== BATALLA NAVAL ===\n\n");

    printf("Nombre del Jugador 1: ");
    fgets(jugadores[0], sizeof(jugadores[0]), stdin);
    jugadores[0][strcspn(jugadores[0], "\n")] = '\0';

    printf("Nombre del Jugador 2: ");
    fgets(jugadores[1], sizeof(jugadores[1]), stdin);
    jugadores[1][strcspn(jugadores[1], "\n")] = '\0';

    printf("\nBienvenidos %s y %s!\n\n", jugadores[0], jugadores[1]);

    // ── Inicializar tableros ─────────────────────────────────────
    for (int p = 0; p < 2; p++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                tablero[p][i][j] = 0;
                strcpy(barcos[p][i][j], "");
            }
        }
    }

    // Barcos Jugador 1
    tablero[0][1][2] = 1; strcpy(barcos[0][1][2], "Fragata");
    tablero[0][3][4] = 1; strcpy(barcos[0][3][4], "Destructor");
    tablero[0][0][0] = 1; strcpy(barcos[0][0][0], "Submarino");

    // Barcos Jugador 2
    tablero[1][2][1] = 1; strcpy(barcos[1][2][1], "Fragata");
    tablero[1][4][3] = 1; strcpy(barcos[1][4][3], "Destructor");
    tablero[1][0][4] = 1; strcpy(barcos[1][0][4], "Submarino");

    int barcos_restantes[2] = {3, 3};
    int turno = 0;
    int ganador = -1;

    while (barcos_restantes[0] > 0 && barcos_restantes[1] > 0) {
        int atacante = turno % 2;
        int defensor = (turno + 1) % 2;

        printf("\n=============================\n");
        printf("Turno de %s\n", jugadores[atacante]);
        printf("Tablero enemigo:\n");

        printf("\n  0 1 2 3 4\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", i);
            for (int j = 0; j < 5; j++) {
                if      (tablero[defensor][i][j] == 0 || tablero[defensor][i][j] == 1) printf("~ ");
                else if (tablero[defensor][i][j] == 2) printf("o ");
                else if (tablero[defensor][i][j] == 3) printf("X ");
            }
            printf("\n");
        }

        printf("\nFila (0-4): ");
        scanf("%d", &fila);
        printf("Columna (0-4): ");
        scanf("%d", &columna);

        if (fila < 0 || fila > 4 || columna < 0 || columna > 4) {
            printf("Coordenadas invalidas. Pierde turno.\n");
            turno++;
            continue;
        }

        if (tablero[defensor][fila][columna] == 2 ||
            tablero[defensor][fila][columna] == 3) {
            printf("Ya disparaste ahi. Pierde turno.\n");
            turno++;
            continue;
        }

        if (tablero[defensor][fila][columna] == 1) {
            printf("\n*** %s impacto un %s! ***\n",
                   jugadores[atacante], barcos[defensor][fila][columna]);
            tablero[defensor][fila][columna] = 3;
            barcos_restantes[defensor]--;

            if (barcos_restantes[defensor] == 0) {
                ganador = atacante;
                break;
            }
        } else {
            printf("\nAgua...\n");
            tablero[defensor][fila][columna] = 2;
        }

        turno++;
    }

    printf("\n=============================\n");
    if (ganador != -1) {
        printf(">>> %s gano la partida! <<<\n", jugadores[ganador]);
    }
    printf("=============================\n");

    return 0;
}
