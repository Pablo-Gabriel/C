#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, nota4, media;
    system("cls");
    printf("\n Quais foram suas notas?");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("Sua media e: %.1f", media);
    if (media < 5) 
        printf("\nVoce nao passou nessa materia.");
    else 
        printf("\nVoce passou na materia.");
    getch();
}