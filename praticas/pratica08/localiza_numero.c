#include <stdio.h>

int main () {
    int n = 10;
    int i = 0;
    int vetor[10];
    for (i = 0; i < n; i++) {
    printf("Informe um numero inteiro para o vetor de 10: \n");
    scanf("%i", &vetor[i]);
    }
    int procurado = 0;
    printf("Informe o numero que sera procurado dentro do vetor: \n");
    scanf("%i", &procurado);
    int encontrado = 0;

    for (i = 0; i < n; i++) {

        if(procurado == vetor[i]) {
            printf("O numero foi encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }

    if (encontrado == 0) {
        printf("O numero nao foi encontrado no vetor :( \n");
    }
    return 0;
}