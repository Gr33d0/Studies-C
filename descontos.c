#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

int main(){
    setlocale(LC_ALL, "Portuguese");
    char op;
    float num1,result=0;

    printf("Menu:\nOpçao 1: cliente comum\nOpçao 2: funcionario\nOpçao 3: vip\nO que queres: ");
    //scanf("%s", &op);
    op = getchar();

    printf("Valor pago: ");
    scanf("%f", &num1);

    

    switch (op)
    {
    case '1':
        printf("Pagaste: %2.f",num1);
    break;

    case '2':
        result = num1 - num1 * 0.1;
        printf("Pagaste:  %2.f",result);
    break;

    case '3':
        result = num1 -num1 * 0.05;
        printf("Pagaste: %2.f",result);
    break;

    default:
        printf("Opçao errada");
    break;
    
    }






    
    
}
