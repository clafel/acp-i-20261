#include <stdio.h>

int main () {
    int numero = 0;
    printf("Informe um numero inteiro: ");
    scanf("%i", &numero);

    int incremento_pre = numero;
    int incremento_pos = numero;
    int decremento_pre = numero;
    int decremento_pos = numero;

    printf("Incremento pre fixado = %i \n", ++incremento_pre);
    printf("Incremento pos fixado = %i \n", incremento_pos++);
    printf("Decremento pre fixado = %i \n", --decremento_pre);
    printf("Decremento pos fixado = %i \n", decremento_pos--);   
    return 0;
}