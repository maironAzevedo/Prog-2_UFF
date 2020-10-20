// void decimal_Hex(int num)
// {
//     int dividendo;
//     char letra;

//     if (num / 16 != 0) {

//         dividendo = num / 16;

//         if (num%16 < 9 && num%16 < 16) {

//             switch (num%16) {
//             case 10:
//                 letra = 'A';
//                 printf(' %c', letra);
//                 break;
//             case 11:
//                 letra = 'B';
//                 printf(' %c', letra);
//                 break;
//             case 12:
//                 letra = 'C';
//                 printf(' %c', letra);
//                 break;
//             case 13:
//                 letra = 'D';
//                 printf(' %c', letra);
//                 break;
//             case 14:
//                 letra = 'E';
//                 printf(' %c', letra);
//                 break;
//             case 15:
//                 letra = 'F';
//                 printf(' %c', letra);
//                 break;
//             }
//         }

//         else {
//             printf("%d", num%16);
//         }

//         decimal_Hex(dividendo);
//     }

//     else {

//         if (num%16 < 9 && num%16 < 16) {
//             switch (num%16) {
//             case 10:
//                 letra = 'A';
//                 printf(' %c', letra);
//                 break;
//             case 11:
//                 letra = 'B';
//                 printf(' %c', letra);
//                 break;
//             case 12:
//                 letra = 'C';
//                 printf(' %c', letra);
//                 break;
//             case 13:
//                 letra = 'D';
//                 printf(' %c', letra);
//                 break;
//             case 14:
//                 letra = 'E';
//                 printf(' %c', letra);
//                 break;
//             case 15:
//                 letra = 'F';
//                 printf(' %c', letra);
//                 break;
//             }
//         }

//         else {
//             printf("%d", num%16);
//         }
//     }
// }

void Decimal_em_Hexadecimal(int num)
{
    int i, j;
    int quociente;

    i = 0;

    int resto[i];

    quociente = num / 16;
    resto[i] = num % 16;

    while (quociente >= 16)
    {
        i++;
        resto[i] = quociente % 16;
        quociente = quociente / 16;
    }
    
    i++;
    resto[i] = quociente;

    printf("\nConversao de %d em Hexadecimal = ", num);

    for (; i >= 0; i--)

        if (resto[i] >= 10)
            switch (resto[i])
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            }
        else
            printf("%d", resto[i]);

    printf("\n\n");
}


int main()
{
    int numero, operacao;
    printf("Bem vindo ao conversor de decimal p/ hexadecimal\n \n");
    printf("Digite o numero que voce deseja converter: \n \n");
    scanf("%d", &numero);
    printf("================================= \n");
    printf("Resultado: \n");
    printf("================================= \n");
    Decimal_em_Hexadecimal(numero);
    return 0;
}
