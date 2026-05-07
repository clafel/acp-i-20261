#include <stdio.h>

int main () {
    int numero = 0;
    printf("Escreva o valor do produto: ");
    scanf("%i", &numero);

    float icms = (numero * 1.0f) * 0.17f;
    float iss = (numero * 1.0f) * 0.05f;
    float pis = (numero * 1.0f) * 0.0165f;
    float valor_total = (1 + icms + iss + pis) * (numero *1.0f);

    printf("O valor do imposto ICMS: %f\n", icms);
     printf("O valor do imposto ISS: %f\n", iss);
      printf("O valor do imposto PIS: %f\n", pis);
       printf("O valor total: %f\n", valor_total);
    return 0;
}