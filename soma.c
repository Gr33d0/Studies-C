#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i,total=0;

    for (i = 0; i < 10; i++)
    {

        printf("Numero: %d\n" , i+1);

        printf("Soma: %d\n", total = total+ i+1);
        //printf("%d\n", total);
    }

    printf("Soma Total: %d\n",total);
    
   
    
    
    
}