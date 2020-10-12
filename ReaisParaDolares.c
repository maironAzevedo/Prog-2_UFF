#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolares, reais;
    printf("Digite o valor da sua compra em dolares: \n $ ");
    scanf("%f", &dolares);
    reais = dolares * 5.64;
    printf("O valor em reais eh de: R$ %.2f", reais);
}