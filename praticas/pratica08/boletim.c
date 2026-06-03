#include <stdio.h>

int main () {
    int i = 0;
    int b = 0;
    float vetor[10][3];
    for (i = 0; i < 10; i++) {
        printf("Informe a primeira nota para um dos alunos: \n");
        scanf("%f", &vetor[i][0]);
        printf("Informe a segunda nota para um dos alunos: \n");
        scanf("%f", &vetor[i][1]);

        vetor[i][2] = vetor[i][0] + vetor[i][1] / 2;
    }
    
    for (i = 0; i < 10; i++) {
        printf("Aluno %i %5.1f %5.1f %5.1f\n", i+1, vetor[i][0], vetor[i][1], vetor[i][2]);
    }

    return 0;
}