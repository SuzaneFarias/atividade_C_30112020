// diferença do produto da diagonal
// principal pela diagonal secundaria

#include <stdio.h>

int main(void) {
    int B[3][3], l, c;
    float dprin = 0, dsecn = 0;

    printf("insira valores para a matriz 3x3\n");

    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("B(%d;%d) = ", l + 1, c + 1);
            scanf("%d", &B[l][c]);
        }
    }

    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("%d ", B[l][c]);
            if (c == 2) {
                printf("\n");
            }
        }
    }

    dprin = B[0][0] * B[1][1] * B[2][2];
    dsecn = B[0][2] * B[1][1] * B[2][0];

    printf("diferenca do produto da diagonal\nprimaria pela secundaria e: \n");
    printf("%.2f", dprin - dsecn);

    return 0;
}