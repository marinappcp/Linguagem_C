/******************************************************************************

                            Aula 6.1
                Link: https://youtu.be/5fSf9xSJK7c

*******************************************************************************/

#include <stdio.h>

int main () {
    int v[5] = {10, 20, 30, 40, 50};
    float s = 0;
    
    for(int i=0; i<5; i++) {
        s += v[i];
    }
    
    float m = s/5;
    
    printf("Resultado: %f\n", m);
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