# Actividad 07: Arreglos de Caracteres (Strings) y Extensiones Multidimensionales en C

## Descripción
Esta actividad implementa una versión extendida y avanzada del simulador "Batalla Naval" en lenguaje C. El programa migra el esquema original de un solo jugador hacia un sistema competitivo de dos jugadores con turnos alternados dinámicos. El algoritmo explota el uso de arreglos de caracteres (*strings*) para la captura de nombres de usuarios, la asignación de identificadores de texto personalizados a las embarcaciones de la flota y el despliegue de notificaciones dinámicas de impacto y victoria en la terminal.

## Temas Aplicados
- **Arreglos de Caracteres (Strings):** Declaración de vectores de texto (`char jugadores[2][20]`) delimitados de forma estricta por el carácter nulo de fin de cadena (`'\0'`).
- **Captura de Texto Segura:** Implementación de `fgets` para permitir la lectura de buffers con espacios integrados, previniendo el desbordamiento de memoria (Buffer Overflow).
- **Funciones de <string.h>:** Uso práctico de funciones fundamentales de biblioteca:
  - `strcpy`: Copia de cadenas de caracteres hacia coordenadas del mapa de flota.
  - `strcspn`: Eliminación y sustitución del salto de línea de entrada (`\n`) generado por la tecla Enter.
- **Arreglos de Cuatro Dimensiones:** Diseño de matrices de strings complejas (`char barcos[2][5][5][15]`) para asociar nombres de navíos a mapas individuales.
- **Aritmética Modular para Turnos:** Uso del operador residuo (`turno % 2`) para alternar de manera infinita los roles de *Atacante* y *Defensor*.

## Compilación y Ejecución
Para compilar y poner en marcha el simulador interactivo multijugador, ejecuta en tu terminal:
```bash
gcc main.c -o batalla_naval_pro
./batalla_naval_pro
