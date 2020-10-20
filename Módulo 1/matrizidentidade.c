#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    while (1) {
        // esse programa deve printar uma matriz identidade de ordem N
        int n, i, j;
        printf("Qual a ordem da matriz desejada? \n");
        scanf("%d", &n);

        if (n == 0) {
            break;
            return 0;
        }

        else {
            int matriz[n][n];

            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (i == j) {
                        matriz[i][j] = 1;
                        printf("[%d]", matriz[i][j]);
                    }
                    else {
                        matriz [i][j] = 0;
                        printf("[%d]", matriz[i][j]);
                    }
                }
                printf("\n");
            };
        };
    };
    return 0;
};
