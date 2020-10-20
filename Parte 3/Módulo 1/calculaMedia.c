#include <stdio.h>
#include <stdlib.h>
// ESTE CÓDIGO TEM COMO OBJETIVO LER E CALCULAR A MÉDIA DE 10 ALUNOS UTILIZANDO VETORES
int main()
{
    float media[10];
    float soma, media_geral;
    int i, nota_maior = 0;

    // LER AS NOTAS
    for (i = 0; i < 10; i++)
    {
        printf("Digite a nota do aluno %d : \n ", i + 1);
        scanf("%f", &media[i]);
    }
    soma = 0;

    // CALCULAR MÉDIA GERAL
    for (i = 0; i < 10; i++)
    {
        soma = soma + media[i];
    }
    media_geral = soma / 10;

    // CONTAR NOTAS MAIORES QUE A MÉDIA
    for (i = 0; i < 10; i++)
    {
        if (media[i] > media_geral)
        {
            nota_maior++;
        }
    }

    printf("===================================\n");
    printf("          MEDIA DA TURMA           \n");
    printf("===================================\n");
    printf("\n               %.2f              \n", media_geral);
    printf("===================================\n");
    printf("       ALUNOS ACIMA DA MEDIA       \n");
    printf("===================================\n");
    printf("\n               %d                \n", nota_maior);

    return 0;
}