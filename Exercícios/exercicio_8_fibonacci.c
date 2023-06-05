/******************************************************************************

                            Exercício 8
                Link: https://youtu.be/_CErwzBtipA

*******************************************************************************/

/*  Faça um programa que mostre os oito primeiros termos da sequência de
    Fibonacci:  0-1-1-2-3-5-8-13-21-34-55-... 
                0    1    1    2    3    5    8    13
    1:          a2   a1   at
    2:          →    a2   a1   at
    3:               →    a2   a1   at      
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 15

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int i, ant1, ant2, atual;
    ant1 = 1;
    ant2 = 0;
    
    printf("Sequência de Fibonacci: ");
    printf("%d ", ant2);
    printf("%d ", ant1);
    
    // Começa a partir do terceiro termo
    for(i=3; i<=MAX; i++) {
        atual = ant1 + ant2;
        printf("%d ", atual);
        
        ant2 = ant1;
        ant1 = atual;
    }

    return 0;
}
