# Investigación: Operadores Unarios y Jerarquía de Operaciones en C

## 1. Operadores Unarios de Incremento y Decremento
En lenguaje C, los operadores unarios permiten incrementar (`++`) o decrementar (`--`) en una unidad el valor de una variable de tipo numérico. Aunque su fin aritmético es el mismo, su colocación sintáctica genera un impacto drástico en el flujo lógico de los datos:

* **Forma Prefija (`++variable` / `--variable`):** El compilador ejecuta la modificación directamente en el registro de la variable en la memoria RAM antes de que su valor sea leído o evaluado por cualquier otra operación de la línea de código actual.
* **Forma Postfija (`variable++` / `variable--`):** El compilador genera una copia temporal del valor actual de la variable en la pila de evaluación para resolver la expresión que la contiene. Solo después de que toda la instrucción completa (delimitada por el punto y coma `;`) ha sido completamente ejecutada y resuelta, el compilador aplica el cambio real sobre la variable original.

El uso de múltiples operadores unarios sobre una misma variable dentro de una sola sentencia de asignación compleja (ej. `x = x++ + ++x;`) debe evitarse en entornos de producción, ya que introduce **puntos de secuencia indefinidos** (*Undefined Behavior*), provocando que diferentes compiladores (GCC, Clang, MSVC) arrojen resultados distintos debido a optimizaciones de registros de hardware.

## 2. Precedencia y Asociatividad de Operadores
La **precedencia** es el conjunto de reglas gramaticales que dicta el orden exacto en el que el compilador agrupa y evalúa los términos de una expresión mixta. C define una tabla estricta de prioridades donde los operadores unarios y multiplicativos superan en prioridad a los aditivos, relacionales y lógicos.

Cuando dos operadores de la misma jerarquía se encuentran juntos en una expresión (por ejemplo, una serie de sumas y restas sucesivas `10 - 5 + 2`), entra en juego la **asociatividad**. La asociatividad determina si la operación se evalúa de izquierda a derecha (como en la mayoría de los operadores aritméticos binarios) o de derecha a izquierda (como en los operadores unarios y de asignación). El uso consciente de los paréntesis `()` anula cualquier regla preestablecida, asegurando la legibilidad del código y la exactitud matemática del algoritmo independientemente del compilador utilizado.
