
#include <stdio.h>

int main() {

    char letra = 'C';
    int entero = 100;
    float decimal = 5.5;
    double preciso = 9.9999;
    short small = 10;
    long grande = 1000000L;
    char texto[] = "Hola";


    printf("Direccion de char:   %p\n", (void*)&letra);
    printf("Direccion de int:    %p\n", (void*)&entero);
    printf("Direccion de float:  %p\n", (void*)&decimal);
    printf("Direccion de double: %p\n", (void*)&preciso);
    printf("Direccion de short:  %p\n", (void*)&small);
    printf("Direccion de long:   %p\n", (void*)&grande);
    printf("Direccion de texto:  %p\n", (void*)&texto);

    return 0;
}
