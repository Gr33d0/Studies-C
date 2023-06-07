#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");
    int altura;

    printf("Digite  a sua altura: ");
    scanf("%d",&altura);

    if (altura >0 && altura <= 5)
    {
        printf("Feto \n");
    }
    
    else if (altura > 5 && altura <= 50)
    {
        printf("Bebe \n");
    }
    else if (altura > 50 && altura <= 100)
    {
        printf("adolescente \n");
    }
    else if (altura > 100 && altura <= 250)
    {
        printf("adulto \n");
    }
    else if (altura > 250)
    {
        printf("Gigante \n");
    }
    else
    {
        printf("Erro \n");
    }




    
    
}
