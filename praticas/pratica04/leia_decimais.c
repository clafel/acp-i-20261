#include <stdio.h>

int main () {

    float nota1;
    float nota2;
    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("A primeira nota do aluno foi: %.1f\n", nota1);
    printf("A segunda nota do aluno foi: %.1f\n", nota2);

    return 0;
}