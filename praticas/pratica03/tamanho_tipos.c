#include <stdio.h>

int main () {

    printf("O tamanho do char eh: %zu\n", sizeof(char));
    printf("O tamanho do short int eh: %zu\n",sizeof(short int));
    printf("O tamanho do int eh: %zu\n",sizeof(int));
    printf("O tamanho do long int eh: %zu\n",sizeof(long int));
    printf("O tamanho do long long int eh: %zu\n",sizeof(long long int));
    printf("O tamanho do float eh: %zu\n",sizeof(float));
    printf("O tamanho do double eh: %zu\n",sizeof(double));
    printf("O tamanho do long double eh: %zu\n", sizeof(long double));

    return 0;
}