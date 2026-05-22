
int main() {
    // Declaracion e inicializacion de todos los tipos de datos comunes
    char letra = 'C';
    int entero = 100;
    unsigned int positivo = 45000;
    short small = 10;
    long grande = 1000000L;
    long long gigante = 9223372036854775807LL;
    float decimal = 5.5f;
    double preciso = 9.9999;
    long double ultra_preciso = 3.141592653589793238L;
    bool booleano = true;
    char texto[] = "Hola";

    printf("%-15s %-25s %-s\n", "TIPO DE DATO", "VALOR GUARDADO", "DIRECCION EN MEMORIA");
    printf("--------------------------------------------------------------------\n");

    // Impresion de cada tipo, su valor y su direccion
    printf("%-15s %-25c %p\n", "char",         letra,         (void*)&letra);
    printf("%-15s %-25d %p\n", "int",          entero,        (void*)&entero);
    printf("%-15s %-25u %p\n", "unsigned int", positivo,      (void*)&positivo);
    printf("%-15s %-25hd %p\n", "short",        small,         (void*)&small);
    printf("%-15s %-25ld %p\n", "long",         grande,        (void*)&grande);
    printf("%-15s %-25lld %p\n", "long long",    gigante,       (void*)&gigante);
    printf("%-15s %-25.1f %p\n", "float",        decimal,       (void*)&decimal);
    printf("%-15s %-25.4f %p\n", "double",       preciso,       (void*)&preciso);
    printf("%-15s %-25.10Lf %p\n","long double", ultra_preciso, (void*)&ultra_preciso);

    // Para bool, mostramos su equivalente numérico (1 para true, 0 para false)
    printf("%-15s %-25s %p\n", "bool",         booleano ? "true (1)" : "false (0)", (void*)&booleano);

    // Para el arreglo de texto, mostramos la cadena completa
    printf("%-15s %-25s %p\n", "char[] (string)", texto,       (void*)&texto);

    return 0;
}
