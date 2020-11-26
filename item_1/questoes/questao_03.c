// Faça um algoritmo para entrar com números enquanto forem
// positivos e imprimir quantos números foram informados:

#include <stdio.h>

int main() {
    int num = 0, cont = 0;

    do {
        printf("digite um numero: ");
        scanf("%d", &num);
        if (num > 0) {
            cont++;
        }
    } while (num > 0);

    printf("numeros pos digitados: %d", cont);

    return 0;
}