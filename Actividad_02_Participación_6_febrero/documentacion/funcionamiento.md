# Análisis Detallado del Comportamiento del Compilador

El programa ejecuta dos bloques lógicos de diagnóstico que demuestran el orden estricto de operaciones en el lenguaje C:

### Bloque 1: Operadores Unarios Combinados
```c
int a = 3;
int b = 4;
int c = a++ + --b;
