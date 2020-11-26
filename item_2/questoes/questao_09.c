// Desenvolver um algoritmo que leia a altura de 15 pessoas.
// Este programa deverá calcular e mostrar : 
// a. A menor altura do grupo; 
// b. A maior altura do grupo;

#include <stdio.h>

int main() {
    float alturas = 0, altmaior = 0, altmenor;

    printf("informe sua altura em metros: \n");
    scanf("%f", &alturas);
    altmaior = alturas;
    altmenor = alturas;

    for(int i = 0; i < 2; i++) {
        printf("informe sua altura em metros: \n");
        scanf("%f", &alturas);

        if (alturas > altmaior) {
            altmaior = alturas;
        } else if (alturas < altmenor) {
            altmenor = alturas;
        }

    }

    //printf("\nmaior altura: %.2f", altmaior);
    printf("\nmenor altura: %.2f", altmenor);

    return 0;
}