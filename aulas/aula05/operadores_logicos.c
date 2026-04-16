#include <stdio.h>

int main () {

    int idade;
    printf("Entre com a idade do cidadao: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    //operadores logicos
    // 1 - Verdadeiro, 0 - Falso
    // E - && - Falso E qualquer coisa = Falso
    // OU - || - Verdadeiro OU qualquer coisa = Verdadeiro
    // NAO - ! - NAO Verdadeiro = Falso, NAO Falso = Verdadeiro

    int eh_obrigado_votar = idade >= 18 && idade <= 70;
    int eh_facultativo_votar = idade >= 16 && idade < 18 || idade > 70;
    int nao_eh_obrigado_votar = !eh_obrigado_votar;

    printf("Voce tem %i anos e deve votar? %i \n", idade, eh_obrigado_votar);
    printf("Voce tem %i anos e tem o voto facultativo? %i \n", idade, eh_facultativo_votar);
    printf("Voce tem %i anos e nao eh obrigatorio a votar? %i \n", idade, nao_eh_obrigado_votar);

    return 0;
}