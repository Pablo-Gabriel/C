#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    int lin, col, n;
    system("cls");
    printf("\n Qual o tamanho do tabuleiro? ");
    scanf("%d", &n);
    for (lin=1; lin<=n; lin++) {
        printf("\n");
        for (col=1; col<=n; col++) {
            if ((lin+col)%2==0);
            else;
            printf("%c%c", 219, 219);
        }
    }
    getch();
}