#include<stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");
    int A,B,Soma=0;

    printf("Digite um numero int: ");
    scanf("%d",&A);

    printf("Digite um numero int: ");
    scanf("%d",&B);

    Soma = A + B;

    printf("O valor da soma = %d \n" , Soma);

    if (Soma > 20)
    {
        printf("O valor é maior que 20 \n");
    }
    else if (Soma > 10 & Soma <= 20)
    {
        printf("O valor é menor que 20 e menor 10\n");
    }
    
    else
    {
        printf("Valor menor ou igual a 10 \n");
    }




    
    
}
