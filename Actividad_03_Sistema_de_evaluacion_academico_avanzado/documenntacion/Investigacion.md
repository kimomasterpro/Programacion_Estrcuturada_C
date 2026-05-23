# Investigación Corta: Operadores Lógicos y Toma de Decisiones en C

## 1. Estructuras de Selección Lineal y Anidada
En el diseño de algoritmos estructurados, la toma de decisiones se controla mediante las estructuras selectivas `if` y `else`. Una sentencia anidada es aquella que se encuentra ubicada dentro del bloque de instrucciones de otra sentencia condicional previa. Esto permite jerarquizar las reglas de negocio de un software, creando filtros en cascada que protegen las funciones principales de procesar datos corruptos o fuera de los límites operacionales.

## 2. Operadores Lógicos de Conjunción y Disyunción
Para evaluar condiciones compuestas en C, se utilizan operadores lógicos booleanos:
* **Conjunción (`&&`):** Evalúa dos expresiones y devuelve verdadero únicamente si ambas premisas se cumplen simultáneamente. Es un operador de cortocircuito; si la primera expresión es falsa, no se evalúa la segunda.
* **Disyunción (`||`):** Evalúa dos expresiones y devuelve verdadero si al menos una de las premisas resulta ser verdadera. Permite agrupar criterios de igualdad múltiple de manera compacta, reduciendo la necesidad de escribir múltiples sentencias `if` consecutivas.
