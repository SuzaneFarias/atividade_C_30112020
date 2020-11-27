// Desenvolver um algoritmo que leia um número não determinado
// de valores e calcule e escreva a média aritmética dos valores
// lidos, a quantidade de valores positivos, a quantidade de
// valores negativos e o percentual de valores negativos e positivos.

#include <stdio.h>

int main() {
    float positivos = 0, negativos = 0;
    int deno = 0;
    float media = 0, nums = 0, numer = 0;
    float percentpos = 0, percentneg = 0;

    printf("\ndigite numeros positivos ou negativos\n");
    printf("pra sair do programa digite 0\n");

    do {
        printf("numero: "); 
        scanf("%f", &nums);

        if(nums > 0) {
            positivos++;
            numer += nums;
            deno++;
        } else if (nums < 0) {
            negativos++;
            numer += nums;
            deno++;
        }

    } while (nums != 0);

    media = numer / deno;
    percentpos = (positivos / (positivos + negativos)) * 100;
    percentneg = (negativos / (positivos + negativos)) * 100;

    printf("\nmedia dos numeros digitados: %.2f", media);
    printf("\nqtd de positivos: %.0f", positivos);
    printf("\nqtd de negativos: %.0f", negativos);
    printf("\n%% de positivos: %.2f", percentpos);
    printf("\n%% de negativos: %.2f", percentneg);



    return 0;
}