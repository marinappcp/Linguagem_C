/******************************************************************************

                            Aula 7
                Link: https://youtu.be/8d1bH8bkj5Q

*******************************************************************************/

#include <stdio.h> 
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int mat[3][3] = {{1, 2, 3}, 
                     {4, 5, 6}, 
                     {7, 8, 9}};
    int i, j;
    
    printf("Imprimindo a primeira linha:\n");
    for(j=0; j<3; j++) {
        printf("%d ", mat[0][j]);
    }
    
    printf("\n\n------------------------------\n"); 
    printf("Imprimindo a matriz toda:\n");
    for(i=0; i<3; i++) {        // coluna
        for(j=0; j<3; j++) {    // linha
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

/*******************************************************************************
 Matrizes:
 ---------------------------------------------------------
 Podem ter várias dimensões
 Dois ou mais índices para acesso a posições
 Sintaxe:   <tipo> <nome>[<dim1>] [<dim2>] ... [<dimN>];

 *********************************************************
 
 Manipulando uma matriz
 ---------------------------------------------------------
 Sintaxe de acesso a posição:
    <nome> [<i1>] [<i2>] ... [<iN>] // índice da dimensão
    
 Sintaxe de inicialização:
    <declaraçã0> = {{<l1>}, {<l2>}, ... {<lN>}}; // linhas
    
*******************************************************************************/
