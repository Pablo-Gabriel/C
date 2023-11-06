#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Limite 30


int main()
{
    float peso, altura, imc;
    system("cls");
    printf("\n Qual seu peso e altura?");
    scanf("%f %f", &peso, &altura);
    imc = peso/pow(altura, 2);
    printf("Seu IMC e %.1f", imc);
    if (imc <= Limite) 
        printf("\nVoce nao esta obeso");
    else 
        printf("\nVoce esta obeso");
    getch();
}
 