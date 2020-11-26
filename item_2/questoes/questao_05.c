// Faça um algoritmo para ler
// 6 números e escrever quantos são pares

#include <stdio.h>

int main() {
    int x[6], i, cont = 0;

    printf("digite seis numeros:\n");

    for(i = 0; i < 6; i++) {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 6; i++) {
        if (x[i] % 2 == 0) {
            cont++;
        }
    }

    printf("qtd de pares: %d", cont);

    return 0;
}