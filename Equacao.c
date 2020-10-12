#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float A, B, C;
    
    printf("Digite o valor 'A' da equação \n");
    scanf("%f", &A);
    printf("Digite o valor 'B' da equação \n");
    scanf("%f", &B);
    printf("Digite o valor 'C' da equação \n");
    scanf("%f", &C);
    
    double Delta = ((pow(B , 2)) - (4 * A * C));
    double Raiz1, Raiz2;
    if (Delta > 0) {
        Raiz1 = (-B + (sqrt(Delta))) / (2 * A);
        Raiz2 = (-B - (sqrt(Delta))) / (2 * A);
        printf("As raízes da equação são: \n%.2f e %2.f", Raiz1, Raiz2);
    }
        else if (Delta == 0) {
            double Raiz;
            Raiz = (-B + (sqrt(Delta))) / (2 * A);
            printf("O delta dessa equação foi igual a '0' portanto a única raiz possível é: \n%.2f", Raiz);
        }
            else {
                printf('O programa encontrou uma raiz imaginária no seu Delta :/');
            };
}