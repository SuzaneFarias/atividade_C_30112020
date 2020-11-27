// FAÇA UM ALGORÍTMO QUE RECEBA VÁRIOS NÚMEROS
// E INFORME O MENOR NÚMERO QUE FOI INFORMADO;

#include <stdio.h>

int main() {
    int num, menor=0;

    scanf("%d", &num);
    menor = num;
    while(num != 0){
        scanf("%d", &num);
        
        if((num<menor)&&(num !=0)){
            menor = num;
        }//fim do if

    }//fim do while

    printf("%d", menor);

    return 0;
}