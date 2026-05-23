#include <stdio.h>

int main() {
    int n, i;
    float calificacion, suma = 0, promedio;
    int aprobados = 0, reprobados = 0;
    float porcentajeAprobados;

    printf("--- Sistema de Gestion de Calificaciones ---\n");

    do {
        printf("Ingrese la cantidad de calificaciones a procesar: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Error: Debe ingresar al menos una calificacion (N > 0).\n");
        }
    } while (n <= 0);


    for (i = 1; i <= n; i++) {

        do {
            printf("Ingrese la calificacion %d (0-100): ", i);
            scanf("%f", &calificacion);

            if (calificacion < 0 || calificacion > 100) {
                printf("Valor fuera de rango. Reintente.\n");
            }
        } while (calificacion < 0 || calificacion > 100);


        suma += calificacion;


        if (calificacion >= 60) {
            aprobados++;
        }
        if (calificacion < 60) {
            reprobados++;
        }
    }


    promedio = suma / n;
    porcentajeAprobados = ((float)aprobados / n) * 100;

    printf("\n======================================\n");
    printf("RESUMEN DE RESULTADOS\n");
    printf("======================================\n");
    printf("Total de alumnos:    %d\n", n);
    printf("Suma total:          %.2f\n", suma);
    printf("Promedio grupal:     %.2f\n", promedio);
    printf("Alumnos aprobados:   %d\n", aprobados);
    printf("Alumnos reprobados:  %d\n", reprobados);
    printf("Porcentaje de exito: %.2f%%\n", porcentajeAprobados);
    printf("======================================\n");

    return 0;
}
