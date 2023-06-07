#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &n);

    int* array1 = (int*) malloc(n * sizeof(int)); // alocando memória para o array1
    int* array2 = (int*) malloc(n * sizeof(int)); // alocando memória para o array2

    printf("Digite os elementos do array1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    // copiando valores do array1 para o array2 usando ponteiros
    int* ptr1 = array1;
    int* ptr2 = array2;
    for (int i = 0; i < n; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    // mostrando os valores dos arrays para verificar se coincidem
    printf("Array1: ");
    for (int i = 0; i < n; i++) {
        printf("%d | ", array1[i]);
    }
    printf("\n");

    printf("Array2: ");
    for (int i = 0; i < n; i++) {
        printf("%d | ", array2[i]);
    }
    printf("\n");

    free(array1); // liberando memória alocada para o array1
    free(array2); // liberando memória alocada para o array2

    return 0;
}
