// Calculadora de determinante matriz 3x3

#include <stdio.h>

int main(void) {
    int A[3][3], l, c;
    float determinante = 0;

    printf("entre com valores para a matriz: \n");

    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("A(%d;%d) = ", l + 1, c + 1);
            scanf("%d", &A[l][c]);
        }
    }

    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("%d ", A[l][c]);
            if (c == 2) {
                printf("\n");
            }
        }
    }

    determinante = (A[0][0] * A[1][1] * A[2][2] + A[0][1] * A[1][2] * A[2][0] + A[0][2] * A[2][1] * A[1][0]) - (A[0][2] * A[1][1] * A[2][0] + A[0][1] * A[1][0] * A[2][2] + A[0][0] * A[2][1] * A[1][2]);

    printf("determinante = %.2f", determinante);

    return 0;
}