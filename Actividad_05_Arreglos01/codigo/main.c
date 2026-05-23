#include <stdio.h>
#include <stdlib.h>

int main(){

    float temp[24];
    float temp1, temp2;
    int dummy;


    printf("direccion de mem de dos flotantes: &temp1: %i, \n&temp2 %i!\n", &temp1, &temp2);
    printf("\ndireccion de temp[24]: %i,\n", &temp);
    printf("\ndireccion de &temp[24]: %i,\n", &temp[0]);
    printf("\ndireccion de &dummy:%i\n", &dummy);




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){


    int N=4;
    float temp [N];
    int i;




    for( i=0 ; i<N; i++){

        printf("ingresa la temperatura de %d:\n", i);
        scanf("%f", &temp[i]);

    }

    for( i=0 ; i<N; i++){

        printf("las tempreraturas ingresadas fueron:%f\n", temp[i]);

    }




