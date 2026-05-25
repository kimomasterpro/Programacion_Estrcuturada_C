
#include <stdio.h>

int main(){


    int a = 3;
    int b = 4;
    int c = a++ + --b;


        printf("%d %d %d\n", a, b , c); // a = 4, b = 3, c = 6.


    int x = 10;
    int y = 3;

        printf("%d\n %d\n", x + y * 2, (x + y) * 2); // x + y * 2 = 16 , (x + y) * 2 = 26.

    return 0;
}
