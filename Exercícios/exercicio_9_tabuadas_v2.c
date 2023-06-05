/******************************************************************************

                            Exercício 9
                Link: https://youtu.be/zlb1auuhnY8

*******************************************************************************/

/* Desenvolva um algoritmo que mostre a tabudada de todos os números de 1 a 10 
    (inclusive). */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    // i = numeros inteiros
    // m = multiplicadores
    // num = produto
    int i, m, num;
    
    for(i=1; i<=MAX; i++) {
        for(m=0; m<=MAX; m++) {
            num = i*m;
            printf("%d x %d = %d\n", i, m, num);
        }  
        printf("\n");  
    }    
  
    return 0;
}
