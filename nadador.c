#include <stdio.h>
#include <stdlib.h>

int main () {

    while (1) {
        int idade = 0;
        printf("Digite a idade: \n");
        scanf("%d", &idade);

        if (idade == 0) {
            break;
            return 0;
        }

        else if (idade < 5) {
            int tempo_rest = 5 - idade;
            printf("Volte daqui a %d anos! \n \n", tempo_rest);
        }

        else if (idade >= 5 && idade <= 7) {
            printf("Infantil A \n \n");
        }

        else if (idade >= 8 && idade <= 10) {
            printf("Infantil B \n \n");
        }

        else if (idade >= 11 && idade <= 14) {
            printf("Juvenil A \n \n");
        }

        else if (idade >= 15 && idade <=17) {
            printf("Juvenil B \n \n");
        }

        else {
            printf("Senior \n \n");
        };
    };

    return 0;
}
