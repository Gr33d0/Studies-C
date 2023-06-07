#include <stdio.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h> //necessário para usar string de forma mais facil

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    char str[40];
    //char exit[]="SAIR";
    int parar = 1;

    while (parar != 0)
    {
        printf("Digite um nome(Para sair digite 'SAIR'): ");
        scanf("%s",str);
        //gets(str);
        printf("%s\n",str);
        parar = strcmp(str,"SAIR");
    }
    






    
    
}
