# Análisis de la Arquitectura Lógica del Simulador Avanzado

El software realiza la gestión paralela de datos espaciales y cadenas de texto mediante el siguiente flujo secuencial de control:

1. **Definición de Buffers de Texto:** Se crea un arreglo bidimensional (`jugadores[2][20]`) destinado a resguardar los nombres de los usuarios de forma indexada (Jugador 0 y Jugador 1).
2. **Mapeo Cuatridimensional de Flotas:** Se estructura la matriz `char barcos[2][5][5][15]`. Esta compleja estructura se interpreta de la siguiente manera:
   - Dimensión 1 (`[2]`): Identificador del Jugador propietario.
   - Dimensión 2 y 3 (`[5][5]`): Coordenadas espaciales (Fila, Columna) en el mapa de juego.
   - Dimensión 4 (`[15]`): Longitud física máxima asignada para la cadena de texto con el nombre del barco.
3. **Captura y Saneamiento de Cadenas:** El programa invoca `fgets` para recibir las entradas de teclado de ambos jugadores. Como `fgets` arrastra el carácter de salto de línea, se aplica la sentencia `jugadores[x][strcspn(jugadores[x], "\n")] = '\0'`, la cual escanea el string, localiza la posición del `\n` y lo sobrescribe inmediatamente con un terminador nulo, garantizando que impresiones posteriores no deformen el formato de la consola.
4. **Inicialización y Asignación de Identificadores:** Un ciclo triple anidado limpia la matriz de enteros `tablero` (colocando `0`) y utiliza `strcpy` para inicializar el mapa de texto de la flota con cadenas vacías (`""`). Terminado el barrido, se usa `strcpy` de manera dirigida para asignar los nombres de "Fragata", "Destructor" y "Submarino" en las respectivas celdas lógicas de cada bando.
5. **Máquina de Turnos por Operador Modular:** Un ciclo de juego interactivo (`while`) se ejecuta indefinidamente mientras el contador de embarcaciones de ambos jugadores sea mayor a cero. En cada ciclo, las variables de rol se calculan mediante:
   - `atacante = turno % 2;`
   - `defensor = (turno + 1) % 2;`
   Esto genera un bucle de alternancia perfecto (0 ataca a 1, luego 1 ataca a 0) incrementando simplemente la variable entera `turno++`.
6. **Validación Jerárquica de Coordenadas:** El sistema filtra las entradas numéricas del disparo a través de dos compuertas condicionales:
   - Verifica que los índices no desborden los límites físicos de la matriz (0 a 4).
   - Consulta si el estado del tablero defensor en ese punto es `2` (agua explorada) o `3` (impacto previo), castigando al jugador con la pérdida del turno en caso de reincidencia.
7. **Lectura Enriquecida de Objetivos:** Si el ataque golpea una coordenada con estado `1` (Barco activo), el programa realiza una lectura directa de la cadena resguardada en `barcos[defensor][fila][columna]`. Imprime dinámicamente un mensaje en primera persona que incluye el nombre del atacante y el nombre textual del barco destruido, actualiza el estado de la celda a `3` y disminuye la flota del defensor hasta declarar un ganador.
