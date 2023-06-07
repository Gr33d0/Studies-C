#include <stdio.h>
#include <stdlib.h>

int random()
{
    int r;

    r =  rand() % 100 +1;   // Initialization, should only be called once.
    
    return r;
}

void jogo1(){
    //variaveis
    int num;

    printf("%d\n",random());
    printf("Escreva um numero de 1 a 100: ");
    scanf("%d",&num);


    



}

void menu(){
    //variavel
    int op;
    switch (op)
    {
    case 1:
        jogo1();
        break;
    case 2:
        /* code */
        break;
    default:
        break;
    }
}

int main (int argc, char *argv[]) {
    menu();

    return 0;
}