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



