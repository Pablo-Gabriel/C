#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int ano, a;
    a = 5;

    printf("|----------------Teste de ano----------------|");
    printf("\n Insira uma ano: ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0){
        printf("\n O ano e bissexto.");
        }
    else {
        printf("\n O ano nao e bissexto.");
    }

}