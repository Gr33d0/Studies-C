#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");
    char op;
    int n_nasc,n_habs,n_mortos;
    float result=0;

    printf("Menu:\nOpçao a: Taxa de natalidade\nOpçao b: Taxa de mortalidade\nO que queres: ");
    //scanf("%s", &op);
    op = getchar();
    printf("Numero de Habitantes: ");
    scanf("%d", &n_habs);

    

    switch (op)
    {
    case 'a':
    //taxa de natalidade
        printf("Numero de criancas nascidas: ");
        scanf("%d", &n_nasc);
        result = (n_nasc * 1000)/n_habs;
        printf("Taxa de natalidade = %.3f",result);
    break;

    case 'b':
    //taxa de mortalidade
        printf("Numero de obitos: ");
        scanf("%d", &n_nasc);
        result = (n_mortos * 1000)/n_habs;
        printf("Taxa de mortalidade = %.3f",result);
    break;
    default:
        printf("Opçao errada");
    break;
    
    }




    
    
}
