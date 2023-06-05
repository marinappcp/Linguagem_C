/******************************************************************************

                            Aula 6.1
                Link: https://youtu.be/5fSf9xSJK7c

*******************************************************************************/

#include <stdio.h>

int main () {
    int v[5];
    int i;
    
    for(i=0; i<5; i++) {
        printf("\nInsira um dado:\n");
        scanf("%d", &v[i]);
    }
    
    printf("Dados inseridos:\n");
    for(i=0; i<5; i++) {
        printf("%d ", v[i]);
    }
}

/*******************************************************************************
 Sintaxe Vetores:
    <tipo> <nome>[tamanho];
 --------------------------------------------------------------------------
 Acesso a uma posição: não é possível acessar um vetor todo 
    <nome>[<índice>]
 
 Lista de inicialização: preenche um vetor todo, de uma vez só
    <tipo> <nome>[<tam.>] = {<v1>, <v2>, ..., <vN>};
    
*******************************************************************************/