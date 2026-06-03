#include <stdio.h>
#include <string.h>

int main () {
    char texto [11]; //sabor string
    texto[0] = 'O';
    texto[1] = 'l';
    texto[2] = 'a';
    texto[3] = ' ';
    texto[4] = 'P';
    texto[5] = 'e';
    texto[6] = 's';
    texto[7] = 's';
    texto[8] = 'o';
    texto[9] = 'a';
    texto[10] = 'l';

    printf("%s\n", texto);

    //NAUM PODE
    // texto = "Bom dia";
    // texto = "Bom" + "dia";

    //copiar string
    strcpy(texto, "Bom"); // texto = "Bom"
    printf("%s\n", texto);

    for(int i=0; i<11; i++) {
        printf("%c", texto[i]);
    }
    printf("\n");

    // concatenar a string
    strcat(texto, " dia"); // texto = texto + " dia";
    printf("%s\n", texto);

    // tamanho da string
    int tamanho = strlen(texto);
    printf("O texto '%s' tem %i caracteres\n", texto, tamanho);
    int capacidade = sizeof(texto);
    printf("O texto guarda ate %i caracteres\n", capacidade);

    // preencher a string com um caracter
    memset(texto, 'a', 8);
    printf("%s\n", texto);
    // limpa a string
    memset(texto, '\0', capacidade);
    printf("%s\n", texto);

    // string > outra, string == outra
    int compara = strcmp("banana", "laranja"); // < 0 = ordem eh antes
    printf("banana com laranja = %i\n", compara);
    compara = strcmp("laranja", "banana"); // > 0 = ordem eh depois
    printf("laranja com banana = %i\n", compara);
    compara = strcmp("banana", "banana"); // 0 = sao iguais
    printf("banana com banana = %i\n", compara);
    compara = strcmp("banana", "BANANA"); // MAIUSCULO na frente de minusculo
    printf("banana com BANANA = %i\n", compara);
    compara = strcmp("BANANA", "banana"); // MAIUSCULO atras de minusculo
    printf("BANANA com banana = %i\n", compara);

    // procurar uma caracter na string
    char *tem_letra_a = strchr("sergipe", 'a');
    printf("sergipe tem a letra 'a'? %s\n", tem_letra_a);
    tem_letra_a = strchr("roraima", 'a');
    printf("roraima tem a letra 'a'? %s\n", tem_letra_a);

    // procurar uma string na string
    char *tem_silva = strstr("joao da silva neto", "silva");
    printf("joao da silva neto tem 'silva'? %s\n", tem_silva);
    tem_silva = strstr("jose de souza", "silva");
    printf("jose de souza tem 'silva'? %s\n", tem_silva);


    return 0;
}