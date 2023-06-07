#include <stdio.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h> //necessário para usar string de forma mais facil

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i;
    char string[] = "Hello Worlds\n";
    
    printf("%s",string);

    //Calcula o tamanho da string
    while (string[i] != '\0')
    {
        i++;
    }

    printf("Tamanho da string: %d\n",i);
    
    
    
}
