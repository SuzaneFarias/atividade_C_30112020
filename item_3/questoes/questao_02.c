// senha de letras

#include <stdio.h>
#include <string.h>

int main() {
    char senhadef[11] = {'h','e','l','l','o','w','o','r','l','d','\0'};
    char senhainput[11];

    printf("\ninforme sua senha de administrador\n");
    printf("\na senha so tem letras e sao 11\n");
    scanf("%s", &senhainput);

    if(strcmp(senhadef, senhainput) == 0) {
        printf("\nAcesso liberado!");
    } else {
        printf("\nTente novamente");
        main();
    }

    return 0;
}