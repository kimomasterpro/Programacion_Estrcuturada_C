# Actividad 05: Arreglos Unidimensionales y Direccionamiento de Memoria

## Descripción
Esta actividad consta de dos fases de análisis práctico orientadas a comprender y dominar el uso de vectores (arreglos unidimensionales) en el lenguaje C:
1. **Fase de Mapeo Físico:** Programa que imprime las direcciones físicas en memoria RAM de variables individuales y de un arreglo contiguo, demostrando empíricamente cómo el identificador de un vector actúa como un apuntador hacia el índice cero (`&temp == &temp[0]`).
2. **Fase de Operación Iterativa:** Programa funcional interactivo que utiliza una constante de control para capturar secuencialmente datos flotantes de temperatura mediante un bucle `for`, almacenándolos de manera contigua para posteriormente recuperarlos y mostrarlos en la terminal.

## Temas aplicados
- Declaración y dimensionamiento estático de arreglos homogéneos (`float temp[N]`).
- Extracción de mapas de direccionamiento físico mediante el operador de referencia `&`.
- Demostración de equivalencia de sintaxis entre identificadores de bloque y apuntadores al primer elemento.
- Control iterativo secuencial para lectura (`scanf`) y escritura (`printf`) de vectores mediante bucles indeterminados por conteo (`for`).

## Compilación y Ejecución
Para compilar y correr el programa de captura de temperaturas ejecutamos en la terminal:
```bash
gcc main.c -o programa_temperaturas
./programa_temperaturas
