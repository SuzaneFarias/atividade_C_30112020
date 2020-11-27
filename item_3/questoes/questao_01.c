// invertendo nome + sobrenome

#include <stdio.h>
#include <string.h>

int main() {
    int q = 0;
    char nome[30], sobrenome[30];

    printf("\nnome: ");
    scanf("%s", &nome);
    printf("sobrenome: ");
    scanf("%s", &sobrenome);

    strrev(nome);
    strrev(sobrenome);

    printf("\nnome ao contrario: %s", nome);
    printf("\nsobrenome ao contrario: %s\n", sobrenome);

    return 0;
}