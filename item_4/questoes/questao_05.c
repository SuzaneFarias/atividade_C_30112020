// Faça um Programa que peça as quatro notas de 10 alunos, calcule e
// armazene num vetor a média de cada aluno, imprima o número de
// alunos com média maior ou igual a 7.0.

#include <stdio.h>

int main() {
    float medias[10], notas[4];
    // float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;
    int i, w, alunos_aprovados = 0;

    for(i = 0; i < 10; i++) {
        printf("\nAluno %d\n", (i + 1));
        for(w = 0; w < 4; w++){ 
            printf("nota %d: ", w + 1);
            scanf("%f", &notas[i]);
        }
    }

    return 0;
}