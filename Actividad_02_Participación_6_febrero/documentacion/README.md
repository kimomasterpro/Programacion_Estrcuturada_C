# Actividad 02: Evaluación de Expresiones, Incrementos y Precedencia de Operadores en C

## Descripción
Esta actividad de laboratorio tiene como finalidad analizar e interpretar de forma experimental el comportamiento interno del compilador `GCC` ante expresiones aritméticas complejas. El programa evalúa de manera práctica la sutil diferencia semántica entre los operadores unarios de post-incremento (`a++`) y pre-decremento (`--b`), así como la jerarquía y precedencia natural de los operadores binarios frente a la alteración explícita mediante el uso de paréntesis asociativos.

## Temas Aplicados
- **Operadores Unarios de Cambio:** Mecánica de pre-operaciones (modificación e inserción inmediata) frente a post-operaciones (uso de valor actual y retraso de modificación hasta el fin de la sentencia).
- **Precedencia de Operadores:** Jerarquía gramatical intrínseca de los operadores aritméticos en C (prioridad de operadores multiplicativos sobre aditivos).
- **Signos de Agrupación:** Uso de paréntesis `()` como la directiva sintáctica de más alta prioridad para romper y reestructurar el orden de evaluación de expresiones.
- **Salida Formateada:** Monitoreo y validación del estado físico de las variables en la memoria RAM impresas en consola mediante `printf`.

## Compilación y Ejecución
Para compilar este programa de diagnóstico y verificar las salidas impresas, ejecuta en la terminal de tu sistema:
```bash
gcc main.c -o prueba_operadores
./prueba_operadores
