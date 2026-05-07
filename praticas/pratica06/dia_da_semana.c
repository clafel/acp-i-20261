#include <stdio.h>

int main () {
int dia = 0;
printf("Informe um dia da semana com um numero de 1 a 7: ");
scanf("%i", &dia);

switch(dia) {
    case 1: printf("Hoje eh final de semana\n"); break;
    case 2: 
    case 3:
    case 4:
    case 5:
    case 6: printf("Hoje eh dia util\n"); break;
    case 7: printf("Hoje eh final de semana\n"); break;
    default: printf("Valor invalido! Tente novamente\n");
}
    return 0;
}