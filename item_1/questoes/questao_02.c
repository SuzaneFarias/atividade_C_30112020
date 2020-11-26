// Escreva um algoritmo que leia os números informados e imprimir o
// dobro de cada número. O algoritmo acaba quando entrar com o
// número -99:

#include <stdio.h>

int main() {
    int num = 0;

    while (num != -99) {
        printf("\ndigite qualquer numero: ");
        scanf("%d", &num);
        if (num != -99) {
            printf("%d", num * 2);
        }
    }   

    return 0;
}