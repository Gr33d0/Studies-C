#include <stdio.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h> //necessário para usar string de forma mais facil

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    char nome[255], estadoCivil;

    printf("Insira o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("\n");


    printf("Insira o seu estado civil: ");
    scanf("%c", &estadoCivil);
    switch (estadoCivil)
    {
    case 's':
    case 'S':
        printf("Solteiro(a) e livre");
        break;
    case 'c':
    case 'C':
        printf("%s",nome);
        break;
    case 'u':
    case 'U':
        printf("%s",nome);
        break;
    case 'v':
    case 'V':
        printf("%s",nome);
        break;
          
    
    default:
        break;
    }
    

    
    
}
