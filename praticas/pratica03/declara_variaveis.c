#include <stdio.h>

int main () {
    char sexo;
    int idade;
    float altura;
    double peso;

    sexo='M';
    idade=18;
    altura=1.78f;
    peso=67.845;

    printf("O sexo eh: %c\n", sexo);
    printf("A idade eh: %i\n", idade);
    printf("A altura eh: %.2f\n", altura);
    printf("O peso eh: %.3f\n", peso);

    return 0;
}