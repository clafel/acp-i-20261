#include <stdio.h>

int main () {

int idade = 0;

printf("Informe sua idade: ");
scanf("%i", &idade);

int crianca = idade < 13;
int adolescente = idade >= 13 && idade <= 17;
int adulto = idade >= 18 && idade <= 64;
int idoso = idade >= 65;

if (crianca) {
    printf("Voce eh uma crianca\n");
} else if (adolescente) {
    printf("Voce eh um adolescente\n");
} else if (adulto) {
    printf("Voce eh um adulto\n");
} else if (idoso) {
    printf("Voce eh um idoso\n");
}
    return 0;
}