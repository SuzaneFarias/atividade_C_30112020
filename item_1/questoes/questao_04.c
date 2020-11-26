// Faça um algoritmo para entrar com números positivos e imprimir a
// média dos números informados:

#include <stdio.h>

int main() {
    int num = 0, cont = 0, soma = 0, media = 0;

    printf("entre com numeros positivos");

    do {
        printf("\nnumero: ");
        scanf("%d", &num);
        if (num > 0) {
            cont++;
            soma += num;
        }
    } while (num > 0);

    media = soma / cont;

    printf("%d", media);
  


    return 0;
}