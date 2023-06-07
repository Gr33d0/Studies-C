#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int n;

    printf("Escolha um n: ");
    scanf("%d",&n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    
    

    //printf("Escolheste array[0] = %d",array[0]);
    

    
    



    
    
}
