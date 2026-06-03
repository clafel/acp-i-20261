#include <stdio.h>

int main () {
    int i = 0;
    int j = 0;
    int b = 0;
    int vetor[3][3];
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Informe o numero %i da coluna %i: \n", i + 1, j + 1);
            scanf("%i", &vetor[i][j]);
        }
    }
    printf("Os numeros nas diagonais da matriz sao: \n");
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if (i == j) {
                printf("%i\n", vetor[i][j]);
        }
    }
    }

    return 0;
}