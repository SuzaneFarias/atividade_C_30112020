// Crie um algoritmo que leia um vetor de números inteiros, de tamanho
// 10, e imprimir todos os valores. Ao final, deverá fornecer a quantidade
// de múltiplos de 3:

#include <stdio.h>

int main() {
    int arr[10], multi3 = 0, i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 3 == 0) {
            multi3++;
        }
    }

    printf("\nqtd de multiplos de 3: %d", multi3);
    return 0;
}