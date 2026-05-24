# Actividad 09: Modularidad, Arreglos y Flujos de Persistencia de Archivos en C

## Descripción
Esta actividad tiene como propósito dominar la descomposición modular de problemas matemáticos complejos y el control de persistencia de datos en memoria secundaria (almacenamiento en disco plano) a través de C estándar. El software implementa la captura de un vector numérico de tamaño fijo, un algoritmo de aislamiento/filtrado para extraer números impares (aritmética de residuos), el manejo por referencia de colecciones contiguas y la correcta serialización de datos delimitados mediante punteros de archivos (`FILE *`).

## Temas Aplicados
- **Descomposición Modular:** Segmentación funcional mediante tareas unitarias (`capturar`, `mostrar`, `filtrar`, `guardar`).
- **Paso de Parámetros por Referencia:** Modificación directa en la memoria RAM de arreglos pasados como argumentos base a subprogramas.
- **Ajustes de Preprocesamiento:** Abstracción de longitudes físicas mediante constantes simbólicas (`#define TAMANO 6`).
- **Manejo de Archivos Estructurados:** Implementación del flujo básico de persistencia en disco plano mediante las funciones de sistema `fopen`, `fprintf`, y `fclose`.
- **Validación de Canales I/O:** Control preventivo de punteros nulos (`NULL`) para evitar fallas críticas de segmentación en el sistema operativo.

## Compilación y Ejecución
Para realizar las pruebas lógicas y generar tu archivo físico persistente, ejecuta en tu consola:
```bash
gcc main.c -o persistencia_filtro
./persistencia_filtro
