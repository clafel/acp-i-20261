#include <stdio.h>

int main () {
int numero = 0;

printf("Informe um numero: ");
scanf("%i", &numero);

int par = numero % 2 == 0;
int impar = numero % 2 == 1;

if (par) {
    printf("O numero eh par\n");
} else if (impar) {
    printf ("O numero eh impar\n");
}
    return 0;
}