// Faça um algoritmo para ler 6 números e
// escrever a média dos números que são ímpares

#include <stdio.h>

int main() {
    int x[6], i, cont = 0;
    int soma = 0, media = 0;

    printf("digite seis numeros:\n");

    for(i = 0; i < 6; i++) {
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 6; i++) {
        if(x[i] % 2 != 0) {
            soma += x[i];
            cont++;
        }
    }

    media = soma / cont;

    printf("a media dos numeros impares digitados e: %d", media);

    return 0;
}