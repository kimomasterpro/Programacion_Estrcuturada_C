# Análisis de Funcionamiento del Algoritmo

El flujo de control de este simulador de Batalla Naval se ejecuta secuencialmente a través de las siguientes etapas operativas:

1. **Definición de Variables:** El programa reserva memoria para una cuadrícula entera bidimensional de 5 filas por 5 columnas (`tablero[5][5]`), además de dos enteros (`fila` y `columna`) para la captura de coordenadas del usuario.

2. **Inicialización en Bloque:** Mediante dos ciclos `for` anidados (donde `i` recorre el eje vertical de las filas y `j` recorre el eje horizontal de las columnas), se limpia cada casilla del tablero asignándole el valor inicial `0` (Agua inexplorada).

3. **Posicionamiento Estratégico:** El código altera manualmente tres posiciones específicas de la matriz, asignándoles el valor `1` (Barco oculto). Estas coordenadas secretas corresponden a los puntos `(1,2)`, `(3,4)` y `(0,0)`. Luego se imprime un mapa inicial hecho puramente de símbolos de olas (`~ `) para no revelar las posiciones al jugador.

4. **Bucle de Turnos e Interacción:** Se inicializa un ciclo `for` parametrizado para dar exactamente 5 turnos de disparo (`turno < 5`). En cada repetición se capturan los valores ingresados por el usuario mediante `scanf`.

5. **Evaluación de Estados y Bifurcación:** El núcleo lógico del juego evalúa el entero almacenado en la coordenada indicada (`tablero[fila][columna]`):
   - **Si es igual a 1:** El sistema detecta un barco oculto, imprime en la consola la cadena `"impacto"` y actualiza esa celda con el estado `3` (Barco hundido).
   - **Si es cualquier otro valor (usualmente 0):** Se determina que el disparo golpeó el océano, se imprime `"agua"` y la celda cambia al estado `2` (Agua explorada).

6. **Renderizado Dinámico de Pantalla:** Al terminar la evaluación de cada turno, un doble ciclo vuelve a barrer toda la matriz, pero esta vez actúa como motor gráfico: si encuentra un `0` o un `1` imprime `~ ` (ocultando los barcos vivos), si encuentra un `2` imprime un círculo `o ` (fallo), y si encuentra un `3` dibuja una cruz `X ` (impacto). Con esto, el mapa se redibuja actualizando el histórico visual de juego en tiempo real.
