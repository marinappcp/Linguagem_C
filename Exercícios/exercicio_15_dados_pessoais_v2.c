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

struct t_pessoa {
    char nome[200];
    int idade;
    float peso;
    float altura;
};

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    struct t_pessoa lista[NUM_PESSOAS];
    int i;
    
    for(i=0; i<NUM_PESSOAS; i++) {
        printf("\nInsira os dados da pessoa %d:\n", i+1);
        printf("Nome: ");
        scanf(" %199[^\n]s", lista[i].nome);
        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        printf("Peso: ");
        scanf("%f", &lista[i].peso);
        printf("Altura: ");
        scanf("%f", &lista[i].altura);
    }
    
    printf("\nNome e idade da pessoa 1: %s, %d anos.\n", lista[0]. nome, lista[0].idade);
    printf("Peso e altura da pessoa 3: %.2f kg, %.2f m.\n", lista[NUM_PESSOAS-1].peso, lista[NUM_PESSOAS-1].altura);

    return 0;
}
