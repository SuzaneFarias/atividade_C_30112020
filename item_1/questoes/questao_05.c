// Escreva um algoritmo que leia os números menores que 20 e
// imprimir a soma somente dos números pares:

#include <stdio.h>

int main() {
    int i = 0, soma = 0;

    for (i = 1; i < 20; i++ ) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("a soma dos pares e: %d", soma);
    
    return 0;
}