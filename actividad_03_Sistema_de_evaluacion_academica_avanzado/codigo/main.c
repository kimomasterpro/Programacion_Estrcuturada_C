
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nm;
    printf("ingresa el numero\n");
    scanf("%i", &nm);

    if (nm>1 && nm<=10){
        if (nm==1||nm==2||nm==3||nm==5||nm==7){

            printf ("es primo");

        }
        else {
            printf ("el numero no es primo");
        }}
    else
        {
        printf ("el numero esta fuera de rango ");
        }

    return 0;
}
