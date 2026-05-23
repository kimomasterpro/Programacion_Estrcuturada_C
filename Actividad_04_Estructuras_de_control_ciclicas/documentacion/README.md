# Actividad 04: Estructuras de Repetición (Ciclos)

## Descripción
Esta actividad comprende el estudio e implementación de las estructuras de control iterativas en lenguaje C (`for`, `while` y `do-while`). Se incluye un programa formal interactivo para la gestión y procesamiento de calificaciones grupales, así como una serie de subprogramas y apuntes técnicos desarrollados en clase que ejemplifican los diferentes métodos de parada y control de bucles.

## Temas aplicados
- **Ciclo con condición de entrada (`while`):** Implementación de bucles basados en una condición centinela (detener el ciclo cuando se ingresa el número `0`).
- **Ciclo con condición de salida (`do-while`):** Aplicación en validación de rangos de datos de entrada (asegurar calificaciones entre 0 y 100) y en el diseño de menús interactivos de usuario.
- **Ciclo determinado por conteo (`for`):** Iteración exacta basada en un contador para la acumulación secuencial de datos numéricos.
- **Acumuladores y Contadores:** Lógica de sumas acumuladas (`suma += calificacion`) y conteos condicionales (`aprobados++`).
- **Casteo de tipos (Typecasting):** Conversión explícita de `int` a `float` para el cálculo exacto de porcentajes y promedios.

## Compilación
Para compilar el programa principal de calificaciones, ejecuta en la terminal:
```bash
gcc main.c -o programa_calificaciones
