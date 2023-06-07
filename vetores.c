#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int array[3];

   //printf("array[%d] = ",0);
    //scanf("%d",&array[0]);

    for (int i = 0; i < 3; i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    
    

    //printf("Escolheste array[0] = %d",array[0]);
    

    
    



    
    
}
