#include <stdio.h>

int main(){

    int num[10], c=0, i=0, soma = 0;
    float media = 0;

    for(i=0;i<10; i++){
        scanf("%d", &num[i]);
        if(num[i] >0){
            c++;
            soma+=num[i]; // soma=soma+num[i]
        }
    }

    for(i=0;i<10;i++){
        printf("\nO numero: %d", num[i]);
    }

    media = soma / c;

    printf("\nMedia dos positivos: %.2f", media);

    return 0;
}