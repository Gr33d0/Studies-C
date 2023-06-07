#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");
    int myNumbers[3];
    int n;

    for (n = 0; n <= 3; n++) {
        printf("Manda Numeros: ");
        scanf("%d \n", &myNumbers[n]);
        printf("%d \n",myNumbers[n]);
    }
    printf("T",myNumbers[3],"T");
       
    

    /*if (altura >0 && altura <= 5)1
    {
        printf("Feto \n");
    }
    
    else if (altura > 5 && altura <= 50)
    {
        printf("Bebe \n");
    }
    else if (altura > 50 && altura <= 100)
    {
        printf("adolescente \n");
    }
    else if (altura > 100 && altura <= 250)
    {
        printf("adulto \n");
    }
    else if (altura > 250)
    {
        printf("Gigante \n");
    }
    else
    {
        printf("Erro \n");
    }
    */



    
    
}
