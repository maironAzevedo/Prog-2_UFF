#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int idade = 0;
    printf("Digite a idade: \n");
    scanf("%d", &idade);

    switch (idade) {

        case (idade < 5): {
            int temp_rest = 5 - idade;
            printf("Volte daqui a %d anos! \n", temp_rest);
            break;
        }

        case >= 5:
        case <=7: {
            printf("Infantil A \n \n");
            break;
        }

        case >= 8:
        case <=10: {
            printf("Infantil B \n \n");
            break;
        }

        case >= 11:
        case <=14: {
            printf("Juvenil A \n \n");
            break;
        }

        case >= 15:
        case <= 17: {
            printf("Juvenil B \n \n");
            break;
        }

        case > 18:
            printf("Sênior")
            break;
    }
    return 0;
}
