#include <stdio.h>

int main () {
    int idade;
    float altura;
    char sexo;
    float peso;
    idade=18;
    altura=1.75;
    sexo='M';
    peso=72.825;
    printf("Informe sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n'); //limpar o buffer
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    while(getchar() != '\n'); //limpar o buffer
    printf("Informe seu sexo: ");
    scanf("%c", &sexo);
    while(getchar() != '\n'); //limpar o buffer
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    while(getchar() != '\n'); //limpar o buffer
    printf("Idade: %i\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Sexo: %c\n", sexo);
    printf("Peso: %.3f\n", peso);
    return 0;
}