#include <stdio.h>

int main () {
    int numero = 0;

    printf("Informe um numero inteiro de quatro digitos: ");
    scanf("%i", &numero);

    int milhares = numero / 1000;
    int centenas = (numero % 1000) / 100;
    int dezenas = (numero % 100) / 10;
    int unidades = numero % 10;

    printf("Decomposição de milhares: %i \n", milhares);
    printf("Decomposição de centenas: %i \n", centenas);
    printf("Decomposição de dezenas: %i \n", dezenas);
    printf("Decomposição de unidades: %i \n", unidades);
    return 0;
}