# Investigación: Arreglos Bidimensionales y Mapeo en Memoria en C

## 1. Definición y Concepto de Matriz en C
Un arreglo bidimensional en el lenguaje de programación C es esencialmente un "arreglo de arreglos". Es una estructura de datos estática, homogénea y finita organizada en una cuadrícula lógica compuesta por filas y columnas. Para acceder a cualquier elemento individual, se requiere especificar de manera obligatoria un par de índices encerrados en corchetes independientes: el primer índice indica la fila de localización y el segundo especifica la columna (`matriz[fila][columna]`).

## 2. Almacenamiento Físico: Orden de Fila Mayor (Row-Major Order)
Aunque los seres humanos visualizamos conceptualmente una matriz como una tabla o plano cartesiano en dos dimensiones, el hardware de la computadora (la memoria RAM) es lineal y unidimensional. El compilador de C soluciona esto utilizando el estándar de **Orden de Fila Mayor** (*Row-Major Order*).

Bajo este esquema, los elementos de la matriz se colocan en bloques adyacentes de memoria de forma consecutiva fila por fila. Es decir, primero se guardan todas las casillas de la fila 0 en celdas contiguas; inmediatamente después de la última columna de la fila 0, se guarda el primer elemento de la fila 1, y así sucesivamente. 

Matemáticamente, si tenemos una matriz declarada como `int M[Filas][Columnas]`, la computadora calcula la dirección exacta de memoria de cualquier elemento `M[i][j]` mediante la siguiente fórmula de desplazamiento de bytes:
