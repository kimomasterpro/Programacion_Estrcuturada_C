
# Análisis de Funcionamiento de las Estructuras Iterativas

El código desarrollado se divide en dos secciones fundamentales: el algoritmo principal de gestión escolar y las estructuras de control analizadas en los apuntes de clase.

## 1. Funcionamiento del Sistema de Calificaciones
- **Validación Inicial de Alumnos (`do-while`):** El programa inicia obligando al usuario a ingresar la cantidad de calificaciones a procesar (`n`). Si se introduce un número menor o igual a cero, el bucle repite la solicitud indefinidamente, protegiendo al sistema de una división entre cero posterior.
- **Ciclo de Captura Estructurado (`for`):** Se ejecuta una estructura `for` que realiza exactamente `n` repeticiones. Dentro de este ciclo se encuentra anidado otro `do-while` encargado de validar que la calificación individual capturada pertenezca al rango escolar estricto de `0` a `100`.
- **Clasificación y Acumulación:** Cada nota válida se suma a la variable `suma`. Inmediatamente después, una bifurcación selectiva incrementa el contador `aprobados` si la nota es mayor o igual a `60`, o el contador `reprobados` en caso contrario.
- **Cálculo de Resultados:** Fuera del ciclo se calcula el promedio grupal. Para obtener el porcentaje de éxito, se aplica un casteo explícito `((float)aprobados / n)` transformando temporalmente el entero para no perder los decimales en la división.

## 2. Funcionamiento de los Apuntes de Clase (Códigos Comentados)
- **Ciclo por Centinela (`while`):** El primer bloque muestra un bucle que acumula valores en `suma` indefinidamente hasta que el usuario teclea un `0` (el cero actúa como señal de parada o centinela).
- **Menú de Opciones (`do-while`):** El segundo bloque ejemplifica la construcción de interfaces de consola. El menú se imprime al menos una vez y se mantiene iterando de forma interactiva hasta que la variable `opcion` sea exactamente igual a `2` (Salir).
- **Estructura de Conteo Continuo (`for`):** El último apunte ilustra un patrón estándar de acumulación simple donde se añade un `valor` a una variable acumuladora un número fijo `N` de veces.
