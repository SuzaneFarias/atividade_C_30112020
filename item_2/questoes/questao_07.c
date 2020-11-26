// Faça um algoritmo que leia 5 números e escrever
// quantos estão no intervalo de 10 a 20
// e quantos estão fora do intervalo

#include <stdio.h>

int main() {
    int nums = 0, i, qtd = 0;

    for(i = 0; i < 5; i++) {
        printf("digite um numero\n");
        scanf("%d", &nums);
        if(nums >= 10 && nums <= 20) {
            qtd++;
        }
    }

    printf("%d no intervalo", qtd);

    return 0;
}