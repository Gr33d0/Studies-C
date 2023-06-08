#include <stdio.h>
#include <string.h>
int main() {
    FILE *arquivo;
    char linha[100];
    char input[100];
    int contador;

    // Abre o arquivo para escrita
    arquivo = fopen("jonas.bib", "w");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Solicita e lê o input do usuário
    printf("Digite algo: ");
    fgets(input, sizeof(input), stdin);

    // Escreve o input no arquivo
    fprintf(arquivo, "%s", input);

    // Fecha o arquivo
    fclose(arquivo);

    // Abre o arquivo para leitura
    arquivo = fopen("jonas.bib", "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o arquivo e imprime seu conteúdo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("Conteúdo do arquivo: %s", linha);
        contador = strlen(linha);
        
        printf("Contem %d caracteres",contador-1);
    }

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
