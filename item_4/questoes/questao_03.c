// Armazenar em vetores nome e salários de 15 pessoas. Calcular e
// armazenar em outro vetor o novo salário, sabendo-se que o reajuste foi
// de 15%. Imprimir

#include <stdio.h>

int main() {
    char arr_nomes[4][20];
    float salario[4], novosalario[4];
    int i;

    for(i = 0; i < 4; i++) {
        printf("\nnome: ");
        scanf("%s", &arr_nomes[i]);
        printf("salario: ");
        scanf("%f", &salario[i]);
    }

    for(i = 0; i < 4; i++) {
        novosalario[i] = salario[i] * 1.15;
    }

    printf("nome - salario\n");

    for(i = 0; i < 4; i++) {
        printf("%s - ", arr_nomes[i]);
        printf("R$%.2f\n", novosalario[i]);
    }

    return 0;
}