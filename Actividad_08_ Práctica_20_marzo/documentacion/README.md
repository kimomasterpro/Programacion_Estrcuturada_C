# Actividad: Juego de Batalla Naval en C

## Descripción
Este proyecto consiste en una implementación interactiva en consola del clásico juego **Batalla Naval** utilizando el lenguaje C. El programa se ejecuta en un tablero bidimensional donde el usuario cuenta con un número limitado de turnos para adivinar la posición de barcos enemigos ocultos.

## Temas aplicados
* **Matrices (Arreglos bidimensionales):** Uso de una cuadrícula de 5x5 para el mapa del juego.
* **Modularidad (Funciones):** Segmentación del código en funciones especializadas con paso de parámetros por referencia.
* **Estructuras de Control:** Ciclos anidados (`for`) y condicionales (`if-else`) para el flujo del juego y validaciones.
* **Manejo de Cadenas:** Captura segura del nombre del jugador mediante `fgets` y limpieza de buffers.

## Explicación de funcionamiento
El juego opera mediante una máquina de estados sencilla representada numéricamente dentro de los elementos de la matriz:
* `0`: Agua oculta (estado inicial).
* `1`: Barco oculto en el tablero.
* `2`: Agua disparada (tiro fallido, visible como `o`).
* `3`: Impacto exitoso (barco dañado, visible como `X`).

### Flujo del programa:
1. **Inicialización:** Se crea una matriz de 5x5 y se invoca a `inicializarTablero()` para llenar todas las posiciones con `0` (agua).
2. **Posicionamiento:** La función `colocarBarcos()` asigna de forma estática el valor `1` a coordenadas específicas que actúan como objetivos ocultos.
3. **Ciclo principal de juego:** El jugador dispone de 5 turnos. En cada uno se le solicita una coordenada de fila y columna (0 a 4).
4. **Validación y Procesamiento:** El sistema valida que las coordenadas estén dentro del rango permitido. Posteriormente, `procesarDisparo()` evalúa el estado de la coordenada: actualiza a `2` si es agua o a `3` si es un barco detectado.
5. **Actualización Visual:** Tras cada tiro, la función `mostrarTablero()` renderiza el mapa enmascarando los barcos ocultos bajo el símbolo `~` y mostrando únicamente los impactos previos.

## Compilación
Para compilar el programa utilizando el compilador GCC, ejecuta el siguiente comando en tu terminal:
```bash
gcc main.c -o batalla_naval
