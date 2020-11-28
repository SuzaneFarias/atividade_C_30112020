// Um time de basquete possui 12 jogadores. Elabore um algoritmo que,
// dado a ALTURA, imprima todos e o jogador mais alto:

#include <stdio.h>

int main() {
    float alt[12], maior = 0;
    int i;

    for(i = 0; i < 12; i++) {
        printf("altura: ");
        scanf("%f", &alt[i]);
        if(alt[i] > maior) {
            maior = alt[i];
        }
    }

    for(i = 0; i < 12; i++) {
        printf("\nA altura: %.2f", alt[i]);
    }

    printf("\nmais alto: %.2f", maior);

    return 0;
}