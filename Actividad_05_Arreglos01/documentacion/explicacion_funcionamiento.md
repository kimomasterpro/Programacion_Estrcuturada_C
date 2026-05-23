# Análisis de Funcionamiento del Código

El material de laboratorio desarrollado pone a prueba dos caras de una misma moneda: cómo ve la computadora a los arreglos en hardware y cómo los manipulamos los programadores mediante software.

## Código 1: Análisis de Direccionamiento de Hardware
- **Declaración:** Se reserva en la pila o *stack* un arreglo llamado `temp` capaz de albergar 24 variables de tipo float continuas. También se crean las variables independientes `temp1`, `temp2` y un entero `dummy`.
- **Comprobación Práctica de Equivalencia:** Las líneas clave de este programa son la segunda y tercera impresión. Al ejecutar `printf("%i", &temp)` y `printf("%i", &temp[0])` el sistema operativo arroja **exactamente el mismo número entero de dirección**. Esto comprueba de manera física que el nombre del arreglo (`temp`) funciona a nivel de bajo nivel como una constante que almacena la dirección de inicio de la estructura en memoria.

## Código 2: Operación de Entrada y Salida con Bucles
- **Inicialización:** Declaramos un entero `N = 4` que sirve como el límite del tamaño del vector y creamos el arreglo `float temp[N]`.
- **Bucle de Escritura (Captura):** El primer ciclo `for (i = 0; i < N; i++)` se repite 4 veces. El contador `i` sirve para dos funciones simultáneas: controlar las repeticiones y apuntar a la casilla del vector donde se almacenará el dato (`&temp[i]`). Al usar el operador `&`, le decimos al `scanf` la ubicación exacta en la RAM de esa casilla para sobreescribir su valor con lo ingresado por el usuario.
- **Bucle de Lectura (Impresión):** Una vez guardados los datos, el segundo bucle realiza un recorrido inverso por las mismas direcciones. En vez de usar `&` porque no vamos a alterar la dirección, mandamos a llamar directamente el valor almacenado pasando la sintaxis `temp[i]` al formateador `%f` del `printf`.
