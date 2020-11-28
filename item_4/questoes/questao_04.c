// Escreva um algoritmo que leia um vetor de 8 elementos inteiros.
// Encontre e mostre o menor elemento e sua posição no vetor:

#include <stdio.h>

int main() {
    int arr_int[8], i, menor = 0, posi = 0;

    printf("\ndigite um inteiro: ");
    scanf("%d", &arr_int[0]);
    menor = arr_int[0];

    for(i = 1; i <= 6; i++) {
        printf("\ndigite um numero: ");
        scanf("%d", &arr_int[i]);
        if(arr_int[i] < menor) {
            menor = arr_int[i];
            posi = i;
        }
    }

    printf("\nmenor elemento: %d", menor);
    printf("\nposicao: %d", posi);

    return 0;
}