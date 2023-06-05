/******************************************************************************

                            Exercício 7
                https://youtu.be/mLEVesjnkj0

*******************************************************************************/

/*  Desenvolva um algoritmo que some todos os números inteiros entre 1 e 10
    (inclusive). */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int i, soma;
    soma = 0;
    i = 1;
    
    do {
        soma = soma + i;
        i++;
    } while(i <= MAX);
    
    printf("Soma dos números inteiros de 1 a 10 = %d.\n", soma);

    return 0;
}
