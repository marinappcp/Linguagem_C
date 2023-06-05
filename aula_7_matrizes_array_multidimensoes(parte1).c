/******************************************************************************

                            Aula 7
                Link: https://youtu.be/8d1bH8bkj5Q

*******************************************************************************/

#include <stdio.h> 
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int mat[3][3];
    
    mat[0][0] = 1;
    mat[0][1] = 2             ;
    mat[0][2] = 3;
    
    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;
    
    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;
    
    printf("Imprimindo a primeira linha:    ");
    printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);
    
    printf("Imprimindo a segunda linha:     ");
    printf("%d %d %d\n", mat[1][0], mat[1][1], mat[1][2]);
    
    printf("Imprimindo a terceira linha:    ");
    printf("%d %d %d\n", mat[2][0], mat[2][1], mat[2][2]);
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
