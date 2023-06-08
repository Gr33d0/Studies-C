#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[25], turma[5];
    float nota_freq;
};

void bubbleSort(struct aluno alunos[], int n)
{
    int i, j;
    struct aluno temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(alunos[j].nome, alunos[j + 1].nome) > 0)
            {
                temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    struct aluno alunos[2] = {{"João", "5D", 14.5}, {"Ana", "3F", 11.43}};

    for (int i = 0; i < 2; i++)
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %s\n", alunos[i].turma);
        printf("Altura: %.2f\n\n", alunos[i].nota_freq);
    }
    bubbleSort(alunos, 2);
    
    printf("Ordenados por nome: \n\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %s\n", alunos[i].turma);
        printf("Altura: %.2f\n\n", alunos[i].nota_freq);
    }
    return 0;
}