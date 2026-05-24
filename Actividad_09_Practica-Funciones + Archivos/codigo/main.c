#include <stdio.h>


void capturar(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void mostrar(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int filtrar(int origen[], int destino[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(origen[i] % 2 != 0) {
            destino[j] = origen[i];
            j++;
        }
    }
    return j;
}

void guardar(int v[], int n) {
    FILE *f;
    f = fopen("resultado.txt", "w"); 

    if (f != NULL) {
        for(int i = 0; i < n; i++) {
            fprintf(f, "%d", v[i]); 
        }
        fclose(f); 
    }
}

int main() {
    int arregloOriginal[6]; 
    int arregloFiltrado[6];
    int totalFiltrados;

    capturar(arregloOriginal, 6);

    printf("\nArreglo original:\n");
    mostrar(arregloOriginal, 6); 

    totalFiltrados = filtrar(arregloOriginal, arregloFiltrado, 6);

    printf("\nArreglo filtrado:\n");
    mostrar(arregloFiltrado, totalFiltrados); 

    guardar(arregloFiltrado, totalFiltrados); 

    printf("\nProceso terminado. Revisa el archivo resultado.txt\n");

    return 0;
}
