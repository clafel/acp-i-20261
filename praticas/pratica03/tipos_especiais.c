#include <stdio.h>

int main () {

    int paises;
    int idiomas;
    long long populacao_decimal;
    long double FI;

    paises=195;
    idiomas=7100;
    populacao_decimal=8274065924;
    FI=1.61803398874989484820L;

    printf("O numero de paises eh: %i\n", paises);
    printf("O numero de idiomas eh: %i\n", idiomas);
    printf("O numero da populacao eh: %lld\n", populacao_decimal);
    printf("O valor da proporcao aurea eh: %.20Lf\n", FI);

    return 0;
}