#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int i,j,val;

    for ( i = 1; i <= 10; i++)
    {
        printf("Tabuada do: %d\n", i);
        for ( j = 1; j <= 10; j++)
        {
             val = i*j;
             printf("%d x %d = %d \n",i,j,val);
        }
        
    }
    


    
    
}
