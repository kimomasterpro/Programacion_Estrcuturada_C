# Investigación: Tipos de Datos en C y su Representación en Memoria

## 1. Introducción
En el lenguaje de programación C, los tipos de datos son la forma en la que le indicamos al compilador el tamaño y la naturaleza del espacio en memoria que debe reservar para almacenar una información. C es un lenguaje de tipado estricto y de bajo nivel, lo que significa que nos permite interactuar de manera directa con las direcciones de memoria física del sistema a través del uso de variables y apuntadores.

---

## 2. Clasificación de los Tipos de Datos Primitivos

### A. Tipos Enteros (Integer Types)
Representan números sin componentes decimales. Su tamaño en bytes puede variar según la arquitectura del procesador (comúnmente de 32 o 64 bits):
* **`char`**: El tipo de dato más pequeño. Generalmente ocupa 1 byte (8 bits) y se utiliza para almacenar caracteres bajo el estándar ASCII o enteros pequeños.
* **`short`**: Entero de tamaño reducido, usualmente de 2 bytes.
* **`int`**: El tipo entero estándar. En arquitecturas modernas ocupa 4 bytes y permite almacenar valores tanto positivos como negativos.
* **`unsigned int`**: Modificador que elimina los valores negativos, duplicando el rango de los positivos aprovechando el bit de signo.
* **`long` y `long long`**: Extensiones para almacenar enteros de gran escala (4 u 8 bytes respectivamente).

### B. Tipos de Punto Flotante (Floating-Point Types)
Se utilizan para representar números con precisión decimal mediante el estándar IEEE 754:
* **`float`**: Precisión simple. Ocupa 4 bytes y ofrece alrededor de 6 a 7 dígitos de precisión.
* **`double`**: Precisión doble. Ocupa 8 bytes y ofrece cerca de 15 dígitos de precisión.
* **`long double`**: Precisión extendida. Dependiendo del compilador, puede ocupar entre 10, 12 o 16 bytes para cálculos de alta fidelidad matemática.

### C. Tipos Lógicos y Compuestos
* **`bool`**: Introducido formalmente en el estándar C99 (a través de `<stdbool.h>`). Aunque lógicamente solo representa `true` o `false`, físicamente ocupa 1 byte de memoria.
* **Arreglos (`char[]`)**: Sucesiones de elementos contiguos en memoria. En el caso de las cadenas de texto, cada carácter ocupa un byte consecutivo y finaliza con el carácter nulo `\0`.

---

## 3. Direccionamiento de Memoria y el Operador Unario `&`
Cada vez que se declara una variable, el sistema operativo le asigna una celda específica en la memoria RAM. 

* **El operador de dirección (`&`)**: Es un operador unario que nos devuelve la dirección de memoria real (en formato hexadecimal) donde inicia dicha variable.
* **Especificador `%p`**: En la función `printf`, el formateador `%p` está diseñado exclusivamente para imprimir estas direcciones de memoria de manera estandarizada. Para cumplir con las buenas prácticas y evitar advertencias del compilador, se realiza un cast explícito a apuntador genérico: `(void*)&variable`.

---

## 4. Conclusión
El análisis de este programa demuestra que C no solo gestiona datos numéricos o de texto, sino que mapea de forma transparente la estructura física del hardware. Comprender cómo se distribuyen los bytes y cómo localizar variables en la memoria RAM es la base fundamental para temas avanzados del curso como los arreglos, el paso de parámetros por referencia, la aritmética de punteros y la gestión de memoria dinámica.
