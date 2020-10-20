#include <stdio.h>
#include <stdlib.h>
    // ESTE CÓDIGO TEM O OBJETIVO DE CRIAR UM CONVERSOR DE NÚMEROS DECIMAIS PARA QUALQUER BASE
    // UM PROTÓTIPO PARA UM CÓDIGO MAIOR QUE CONVERTE QUALQUER NUMERO PARA QUALQUER OUTRO
void decimal_Binario (int num) {
    int dividendo;
    if (num / 2 != 0) {
        dividendo = num / 2;
        decimal_Binario (dividendo);
        printf("%d", num%2);
    }
    else {
        printf("%d", num%2);
    }
}

int main() {
    int numero, operacao;
    printf("Bem vindo ao conversor de decimal p/ binario\n");
    printf("Digite o numero que voce deseja converter: \n");
    scanf("%d", &numero);
    printf("Resultado: \n");
    decimal_Binario(numero);
    return 0;
}
