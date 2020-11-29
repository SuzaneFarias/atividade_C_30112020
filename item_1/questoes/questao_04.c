// Faça um algoritmo para entrar com números positivos e imprimir a
// média dos números informados:

#include <stdio.h>

int main() {
    float num = 0, cont = 0, soma = 0, media = 0;

    printf("entre com numeros positivos");

    do {
        printf("\nnumero: ");
        scanf("%f", &num);
        if (num > 0) {
            cont++;
            soma += num;
        }
    } while (num > 0);

    media = soma / cont;

    printf("%.2f", media);
  


    return 0;
}