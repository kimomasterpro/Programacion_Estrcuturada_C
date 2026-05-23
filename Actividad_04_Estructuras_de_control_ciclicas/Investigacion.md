# Investigación: Estructuras de Repetición y Métodos de Control en C

## 1. Clasificación de Ciclos en Programación Estructurada
Los ciclos o bucles permiten ejecutar un bloque de instrucciones múltiples veces. En C se clasifican bajo dos criterios de evaluación lógica:

- **Pre-prueba (`while` y `for`):** Evalúan la condición lógica antes de permitir el ingreso al bloque de código. Si la condición es falsa desde el primer intento, las instrucciones de su interior nunca llegan a ejecutarse. El ciclo `for` se prefiere cuando conocemos de antemano el número exacto de repeticiones, mientras que el `while` se usa cuando la cantidad de vueltas es indeterminada.
- **Pos-prueba (`do-while`):** Evalúa la condición al final del bloque. Esto garantiza de forma obligatoria que las instrucciones internas se ejecuten **al menos una vez**, lo que vuelve a esta estructura la herramienta ideal para la creación de menús en consola y filtros de validación de datos.

## 2. Estrategias de Parada: Contadores vs. Centinelas
- **Control por Contador:** El ciclo depende de una variable numérica que se incrementa o decrementa de manera uniforme en cada iteración hasta alcanzar un valor límite prefijado.
- **Control por Centinela:** El bucle no sabe cuántas repeticiones realizará. Depende por completo de que aparezca un valor específico (como un `0`, un número negativo o un carácter especial) introducido por el usuario o por un archivo para ordenar la finalización del proceso.
