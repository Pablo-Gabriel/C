#include <stdio.h>
#include <conio.h>
#include <math.h>

int pot(int x, int n) {
    int i, pot, a = x;
    for (i = 2; i<=n; i++){
        pot = x * a;
        a = pot;       
    }
    return pot;
}


int main(){
    int p;
    p = pot(4, 8);
    printf(" %d", p);
}