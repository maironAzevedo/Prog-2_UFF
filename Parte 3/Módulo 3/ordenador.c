#include <stdio.h>
#include <stdlib.h>

void printList(int *list) {
    int i;
    printf("=================================\n");
    printf("Lista Ordenada: \n\n");
    printf("[ ");
    for (i = 0; i < 5; i++) {
        printf("%d ", list[i]);
    }
    printf("]");
}

void bubbleSortOrder(int *list) {
    int i, j, aux;
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j ++) {
            if (list[j] < list[i]) {
                aux = list[i];
                list[i] = list[j];
                list[j] = aux;
            }
        }
    }
}

void insertionSortOrder(int *list) {
    int i, j, aux;

    for(i = 1; i < 5; i++) {  
        aux = list[i];
        j = i - 1;
        while((j >= 0) && (aux < list[j])) {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = aux;
    }

}

void selectionSortOrder(int *list) {
    int i, j, aux, index;

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(list[i] > list[j]) {
                aux = list[j];
                index = j;
            }
        list[index] = list[i];
        list[i] = aux;
        }
    }
}

int main() {
    int option, i, list[5];

    printf("=================================\n");
    printf("====== Ordenador de listas ======\n");
    printf("=================================\n");
    printf("    Digite os valores da lista   \n");
    
    for (i = 0; i < 5; i++) {
        printf("Valor %d: \n", i + 1);
        scanf("%d", &list[i]);
    }

    printf("=================================\n");
    printf("=Selecione o metodo de ordenacao=\n");
    printf("=================================\n");
    printf("Opcao 1: Ordenacao da bolha\n\n");
    printf("Opcao 2: Ordenacao por insercao\n\n");
    printf("Opcao 3: Ordenacao por selecao\n");
    printf("=================================\n");
    scanf("%d", &option);

    switch (option) {
        case 1: {
            bubbleSortOrder(list);
            break;
        }

        case 2: {
            insertionSortOrder(list);
            break;
        }

        case 3: {
            selectionSortOrder(list);
            break;
        }
    }

    printList(list);

    return 0;
}