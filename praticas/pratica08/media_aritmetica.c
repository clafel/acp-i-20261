#include <stdio.h>

int main () {
    int n = 0;
    int i = 0;
    printf("Informe um numero inteiro n: \n");
    scanf("%i", &n);
    int numero[n];
    int soma = 0;
    int vetor[i];
    for (i = 0; i < n; i++) {
        printf("Informe os numeros do vetor: \n");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    float media = (float)soma / n;
    printf("A media aritmetica dos numeros eh: %f\n", media);

    return 0;
}