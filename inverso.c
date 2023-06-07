#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int v[5]={1,3,50,4,6};
    int inverso[5];
    
    for (int i = 0; i < 5; i++)
    {
        inverso[i] = v[4-i];

        printf("inverso: %d \n",inverso[i]);
    }

    
    
}
