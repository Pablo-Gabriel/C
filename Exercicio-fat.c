#include <stdio.h>
#include <conio.h>
#include <math.h>



int fat(int a) {
    int f, n, n1 = 1 , n2 = 1;
    for (n = 2; n<=(a+1); n++){
        f = n1 * n2;
        n1 = n;
        n2 = f;
    } 
    return f;
}
