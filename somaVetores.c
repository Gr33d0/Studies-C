#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int v[5];
    int u[5];
    int w[5];

   //printf("array[%d] = ",0);
    //scanf("%d",&array[0]);

    for (int i = 0; i < 5; i++)
    {
        printf("V array[%d] = ",i);
        scanf("%d",&v[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("U array[%d] = ",i);
        scanf("%d",&u[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        w[i] = v[i]+u[i];

        printf("%d = %d + %d \n",w[i],v[i],u[i]);


    }
    



    
    
}
