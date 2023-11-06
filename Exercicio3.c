#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float distancia, litros, media;
    system("cls");
    printf("\nQuanto voce andou? ");
    scanf("%f", &distancia);
    printf("\n Quantos litros de combustivel seu veiculo consumiu? ");
    scanf("%f", &litros);
    media = distancia/litros;
    printf("Sua media por litro foi de: %.2f Km/L", media);
    getch();
}