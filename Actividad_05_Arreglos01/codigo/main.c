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


