/******************************************************************************

                            Aula 9.1
                Link: https://youtu.be/jd9PABbIvbA

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void imprime (int m[][4], int n) {
    int i, j;
    for(i=0; i<n; i++) {        // linhas
        for(j=0; j<4; j++) {    // colunas
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int mat[3][4] = {{1,2,3,4},
                     {50,60,70,80},
                     {91,101,111,121}};
                     
    imprime(mat, 3);
}

/*******************************************************************************
 Funções:
 -----------------------------------------------
 Modularização
 Fundamentos conceituais
 Diversidade de parâmetros
 
 Sintaxe de definição
    <tipo> <nome_da_função> (<parâmetros>) {
        <bloco_de_comandos>
        return <informação>;
    }

 Identificados: mesma regra de variáveis
 Tipo de retorno: não é obrigatório em C 
 Parâmetros: nenhum ou vários
 
 ***********************************************
 Parâmetros de funções distintas
 -----------------------------------------------
 Sintaxe para parâmetros struct:
    <tipo> <função>(<tipo_struct> <param>) {...}
    
 Sintaxes para vetores/matrizes como parâmetro
    <tipo> <função> (<tipo> <vet>[], int tam) {...}
        <tipo> <função> (<tipo> <vet>[tam]) {...}
        <tipo> <função> (<tipo> *<vet>, int tam) {...}
    <tipo> <função> (<tipo m[] [<tam2>], int tam1) {...}
 
*******************************************************************************/
 
