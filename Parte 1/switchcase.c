#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "");
    int POLI;
    float vol, LADO;

    printf("Digite o valor do lado do poligono \n");
    scanf("%f", &LADO);
    printf("Digite o numero do poligono desejado \n(1) QUADRADO \n(2) PRISMA HEXAGONAL \n(3) PIRAMIDE QUADRADA");
    scanf("%d", &POLI);

    switch (POLI) {
        case 1:
            vol = pow(LADO,3);
            printf("O volume do quadrado eh igual a: \n%.2f", vol );
            break;
        case 2:
            vol = (3 * pow(LADO,2)) * (sqrt(3)) / 2;
            printf("O volume do prisma hexagonal eh igual a: \n%.2f", vol );
            break;
        case 3:
            vol = pow(LADO,3)/3;
            printf("O volume do prisma hexagonal eh igual a: \n%.2f", vol );
            break;           
    }
    return 0;
}
