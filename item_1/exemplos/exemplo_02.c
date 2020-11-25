// Criar um algoritmo que leia três valores inteiros e imprimir
// seu maior número. (suponha números diferentes).

#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, num3 = 0;

    printf("Digite tres numeros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("maior numero: %d", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("maior numero: %d", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("maior numero: %d", num3);
    }

    return 0;
}