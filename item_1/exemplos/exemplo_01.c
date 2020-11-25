// Criar um algoritmo que leia um número, verifique se é
// divisível por 57 e imprima “Verdadeiro” caso seja divisível
// ou “Falso” caso não seja:

#include <stdio.h>

int main() {
    int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 57 == 0) {
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }

    return 0;
}