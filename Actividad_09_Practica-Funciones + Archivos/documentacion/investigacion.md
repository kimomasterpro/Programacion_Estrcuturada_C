# Investigación: Modularidad, Ámbito de Arreglos y Flujos de Archivos en C

## 1. Modularidad y el Paso de Arreglos por Referencia
La modularidad es el pilar de la programación estructurada que permite aplicar el principio de "divide y vencerás". En C, las funciones representan bloques autónomos de lógica. 

Cuando una función requiere procesar variables primitivas estándar (como un entero `int`), el lenguaje utiliza de forma nativa el **paso por valor**, creando una copia exacta de la variable en una sección aislada de la pila de memoria; cualquier cambio interno no afecta a la variable original del `main`. Sin embargo, cuando se trabaja con **arreglos**, la semántica cambia a **paso por referencia implícito**. Debido a que duplicar arreglos grandes en la pila de memoria degradaría severamente el rendimiento del hardware, C transfiere únicamente la dirección de memoria base del primer elemento (un apuntador implícito). Por tanto, cualquier asignación ejecutada dentro de las funciones (como en `capturar`) altera de forma inmediata y permanente las casillas reales de memoria asignadas en la función principal.

## 2. Flujos de Archivos y Persistencia de Datos (`FILE *`)
La memoria de acceso aleatorio (RAM) es volátil; todos sus datos se destruyen al finalizar la ejecución del software. Para lograr la persistencia de datos, el lenguaje se comunica con el sistema operativo mediante flujos de bytes administrados por la estructura abstracta `FILE`, definida en el encabezado `<stdio.h>`.

El ciclo de vida básico de manipulación de archivos consta de tres fases críticas:
* **Apertura y Asignación de Modo (`fopen`):** Establece el enlace lógico. El modo `"w"` (*write*) indica al sistema que cree un archivo nuevo de texto plano o que vacíe por completo uno preexistente en la misma ruta. Devuelve una dirección válida o, en caso de error (permisos denegados, ruta inexistente), retorna un puntero nulo (`NULL`).
* **Escritura Formateada (`fprintf`):** Funciona de forma idéntica a `printf`, pero en lugar de dirigir los caracteres hacia la salida estándar de la consola (`stdout`), los inyecta en el canal del archivo abierto.
* **Liberación de Descriptores (`fclose`):** Desvincula el apuntador. Esta fase es crítica debido a que los sistemas operativos no escriben inmediatamente en el disco mecánico o de estado sólido cada vez que se ejecuta `fprintf`; acumulan los caracteres en un búfer intermedio de alta velocidad. Invocar `fclose` obliga al sistema a realizar un vaciado definitivo (*flush*) al almacenamiento secundario y previene la corrupción del archivo.
