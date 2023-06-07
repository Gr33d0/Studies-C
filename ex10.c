#include <stdio.h>
#include <stdlib.h>

int main () {
    int min=1, max=10, i, j, primo,primoArray[10];

    
    for (i = min; i <= max; i++) {
        if (i == 0 || i == 1) {
            //números zero e 1 não são primos
            primo = 0;
        } else {
            primo = 1; //considero inicialmente que o número é primo
            for(j = 2; j < i; j++) { //tento provar que ele não é primo
                if (i % j == 0) {
                    primo = 0; //consigo provar que ele não é primo
                }
            }
        }
        if (primo == 1) {
            primoArray[i]= i;
        }
    }
    
    
    return 0;
}