## 1. Arreglos Bidimensionales (Matrices) en Lenguaje C
En el lenguaje de programación C, una matriz es un arreglo de arreglos, lo que significa que los datos se organizan en filas y columnas utilizando bloques contiguos de memoria. Para acceder a un elemento se requieren dos índices: el primero denota la fila y el segundo la columna. 

Un aspecto crítico al trabajar con matrices y funciones en C es que, al declarar los parámetros de una función, es obligatorio especificar el tamaño de la segunda dimensión (columnas). Esto es necesario para que el compilador pueda calcular correctamente el desplazamiento de memoria mediante la fórmula de direccionamiento indexado.

## 2. Modularidad y Paso de Parámetros por Referencia
La programación estructurada fomenta la división de un problema complejo en subprogramas o funciones independientes. En C, cuando se pasa un arreglo o matriz a una función, este no se copia por completo en la memoria; en su lugar, se pasa un puntero al primer elemento (paso por referencia implícito). Cualquier modificación realizada dentro de las funciones (`inicializarTablero`, `procesarDisparo`) afecta directamente a la matriz original declarada en el `main`.

## 3. Lógica de Enmascaramiento en Entornos CLI (Command Line Interface)
En los videojuegos basados en texto o consola, el "enmascaramiento" consiste en ocultar la lógica real de los datos detrás de una interfaz de caracteres amigable para el usuario. Aunque internamente la matriz almacena números enteros (`0`, `1`, `2`, `3`), el usuario final solo observa representaciones simbólicas como `~` para el misterio del océano, `o` para los fallos y `X` para los aciertos.
