#include <stdio.h>
#include <stdlib.h>
    //   este código tem o objetivo de calcular a média entre 3 alunos
int main() {
    float nota, total, media;
    int i;
    total = 0;

    for (i = 0; i < 3; i++) {
        printf("Digite a nota do aluno %d \n \n", i+1);
        scanf("%f", &nota);
        total = total + nota;
    };

    media = total / 3;

    printf("===================================\n");
    printf("          MEDIA DA TURMA           \n");
    printf("===================================\n");
    printf("%.2f", media);

    return 0;
}