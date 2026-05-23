# Actividad 06: Arreglos Bidimensionales (Simulador de Batalla Naval)

## Descripción
Este programa implementa un simulador interactivo del juego clásico "Batalla Naval" en una matriz de 5x5 en lenguaje C. El algoritmo hace uso de una máquina de estados numéricos para controlar la lógica del juego, permitiendo al usuario realizar hasta 5 disparos por coordenadas de consola, evaluando impactos en tiempo real y actualizando gráficamente la cuadrícula de juego tras cada turno.

## Temas aplicados
- **Matrices Estáticas Homogéneas:** Declaración y control de estructuras de dos dimensiones (`int tablero[5][5]`).
- **Ciclos Iterativos Anidados:** Uso de estructuras `for` de doble nivel para procesos secuenciales de inicialización y renderizado gráfico.
- **Máquina de Estados Numéricos:** Codificación lógica de eventos del juego mediante asignación de enteros:
  - `0`: Agua limpia / Inexplorada (`~ `)
  - `1`: Barco oculto (`~ ` en la interfaz del jugador)
  - `2`: Disparo fallido / Agua (`o `)
  - `3`: Disparo acertado / Impacto (`X `)
- **Estructuras de Control de Turnos:** Bucles iterativos para la captura secuencial y procesamiento dinámico de entradas del usuario.

## Compilación y Ejecución
Para compilar y ejecutar el videojuego interactivo desde la consola de comandos, ingresa:
```bash
gcc main.c -o batalla_naval
./batalla_naval
