#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    //crie 2 vetores u e v com 5 w inverso u e o t=v+w
    int u[5],v[5],w[5],t[5];


    //Pedir u
    for (int i = 0; i < 5; i++)
    {
        printf("V array[%d] = ",i);
        scanf("%d",&v[i]);
    }
    //Pedir v
    for (int i = 0; i < 5; i++)
    {
        printf("U array[%d] = ",i);
        scanf("%d",&u[i]);
    }

    //Inverso w = inverso u
    for (int i = 0; i < 5; i++)
    {
        w[i] = u[4-i];
    }

    //Apresenta u
    for (int i = 0; i < 5; i++)
    {
        printf("\nArray u[%d] = %d",i,u[i]);
    }

    //Apresenta v
    for (int i = 0; i < 5; i++)
    {
        printf("\nArray v[%d] = %d",i,v[i]);
    }
    //Apresenta w
    for (int i = 0; i < 5; i++)
    {
        printf("\nArray w[%d] = %d",i,w[i]);
    }

    //Soma de t = v + w
    for (int i = 0; i < 5; i++)
    {
        t[i] = v[i]+w[i];
        printf("\nArray t[%d]: %d = %d + %d",i,t[i],v[i],w[i]);


    }




    
    
}
