#include <stdio.h>

int main () {
    int menu = 0;
    printf("Escolha sua opcao\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuacao\n");
    printf("4 - Sair\n");
    scanf("%i", &menu);

    switch (menu) {
        case 1: printf("Voce criou um novo jogo\n"); break;
        case 2: printf("Voce continuou o jogo\n"); break;
        case 3: printf("Voce viu sua pontuacao\n"); break;
        case 4: printf("Voce saiu do jogo\n"); break;
        default: printf("Opcao invalida! Tente novamente\n");
    }
    return 0;
}