#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    float A, B, C;

    printf("Digite o valor 'A' da equação \n");
    scanf("%f", &A);
    printf("Digite o valor 'B' da equação \n");
    scanf("%f", &B);
    printf("Digite o valor 'C' da equação \n");
    scanf("%f", &C);
    float Delta = ((pow(B , 2)) - (4 * A * C));

    if (Delta >= 0) {
        float Raiz1 = (-B + (sqrt(Delta))) / (2 * A);
        float Raiz2 = (-B - (sqrt(Delta))) / (2 * A);

        printf("Suas raízes são %.2f e %.2f", Raiz1, Raiz2);
    }

        else {
            printf("Delta negativo :/");
        };

}
