#include <stdio.h>

main(){
    int idades[10], i=0;
    
    for(i=0;i<10;i++){
        printf("\nDigite uma idade: ");
        scanf("%d", &idades[i]);
    }

    for(i=0;i<10;i++){
        if(idades[i] >=18){
            printf("\nA idade: %d", idades[i]);
        }
    }

}