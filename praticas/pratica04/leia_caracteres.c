#include <stdio.h>

int main () {

    char claudio;
    claudio='M';
    printf("Pressione um caractere: ");
    scanf("%c", &claudio);
    printf("O seu caractere '%c' tem o codigo ASCII: %d\n", claudio, claudio);

    return 0;
}