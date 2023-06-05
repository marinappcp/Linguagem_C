/******************************************************************************

                            Exercício 15
                Link: https://youtu.be/xNhLEL_S5tU

*******************************************************************************/

/*  Faça um programa que seja capaz de armazenar os dados de três pessoas: nome,
    idade, peso e altura. Ao final, o algoritmo deve mostrar, na tela, o nome e 
    a idade da primeira pessoa e o peso e a altura da última pessoa. */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_PESSOAS 3

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[NUM_PESSOAS][50];
    int n, idade[NUM_PESSOAS];
    float peso[NUM_PESSOAS], altura[NUM_PESSOAS];
    
    for(n=0; n<NUM_PESSOAS; n++) {
        printf("Insira os dados da pessoa %d:\n", n+1);
        printf("Nome: ");
        scanf(" %49[^\n]s", nome[n]); 
        
        printf("Idade: ");
        scanf("%d", &idade[n]);
        
        printf("Peso: ");
        scanf("%f", &peso[n]);
        
        printf("Altura: ");
        scanf("%f", &altura[n]);
        
        printf("\n");
        fflush(stdin);
    }
    
    printf("Nome e idade pessoa 1: %s, %d anos.\n", nome[1], idade[1]);
    printf("Peso e altura pessoa 3: %.2f kg, %.2f m\n", peso[NUM_PESSOAS-1], altura[NUM_PESSOAS-1]);

    return 0;
}
