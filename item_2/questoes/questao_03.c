// Faça um algoritmo que apresente a
// tabuada de multiplicar de um número qualquer

#include <stdio.h>

int main() {
    int num = 0, i = 0;

    printf("digite um numero para a tabuada: ");
    scanf("%d", &num);

    for (i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}