#include<stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a=10,b=50;

    if ((a>0) && (b!=50))
    {
        printf("Ola \n");
    }
    
    else
    {
        printf("Adeus \n");
    }


    return(0);

    
    
}
