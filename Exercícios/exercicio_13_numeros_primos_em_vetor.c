/******************************************************************************

                            Exercício 13
                Link: https://youtu.be/c2S4G7SyU5w

*******************************************************************************/

/*  (Adaptado de ASCENO e LinkCAMPOS, 2008) Faça um programa que carregue um vetor
    de nove elementos numéricos inteiros, calcule e mostre os números primos e 
    suas respectivas posições. */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 9

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    // i = navega pelo vetor
    // cont = qtde de divisores
    int vet[TAM], i, j, cont;
    
    for(i=0; i<TAM; i++) {
        printf("Insira um número inteiro: ");
        scanf("%d", &vet[i]);
        
    }
    
    printf("\n");
    
    for(i=0; i<TAM; i++) {
        cont = 0;
        for(j=1; j<=vet[i]; j++) {
            if(vet[i] % j == 0) { // se x for divisível por i
                cont++;
            }
        }
        
        if(cont == 2) { // caso haja apenas 2 divisores
            if(vet[i] < 10) {
                printf(" %d é primo, posição: %d.\n", vet[i], i);
            } else {
                printf("%d é primo, posição: %d.\n", vet[i], i);
            }
        }
    }
    
    return 0;
}
