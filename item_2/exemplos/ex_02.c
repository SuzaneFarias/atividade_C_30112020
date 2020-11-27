// FAÇA UM ALGORÍTMO QUE RECEBA VÁRIOS NÚMEROS
// E INFORME O MAIOR NÚMERO QUE FOI INFORMADO;

#include <stdio.h>

int main() {
    int num, maior = 0;

    do {
        scanf("%d", &num);
        if(num > maior) {
            maior = num;
        } // fim do if
    } while (num != 0);

    printf("%d", maior);

    return 0;
}