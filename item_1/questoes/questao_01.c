// Escreva um algoritmo que leia os números maiores que 0 enquanto a
// sua soma não ultrapasse 10, escreva o sucessor do número:

#include <stdio.h>

int main() {
    int soma = 0, i = 0;

    do {
        printf("digite numeros maiores que 0\n ate a soma bater em 10\n");
        scanf("%d", &i);
        soma += i;
    } while (soma <= 10);

    printf("passou de 10\n");
    printf("sucessor do last number: %d", i + 1);

    return 0;
}