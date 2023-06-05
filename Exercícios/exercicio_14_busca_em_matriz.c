/******************************************************************************

                            Exercício 14
                Link: https://youtu.be/zj-7DRXbI3w

*******************************************************************************/

/*  Desenvolva um algoritmo que preencha uma matriz numérico de dimensões 3x3. 
    Após preencher todo a matriz, o usuário deve inserir uma chave de busca X. 
    Caso exista algum número igual a X, dentro da matriz, o algoritmo deve mos-
    trar, na tela, os indices da linha e da coluna da posição na qual na qual X 
    foi encontrado pela primeira vez. Caso contrário, o algoritmo deve se encer-
    rar com uma única mensagem, dizendo "Chave não encontrada.". */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAML 3
#define TAMC 3

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int mat[TAML][TAMC];
    int i, j, x, lin, col, achou = 0;
    
    printf("Insira os elementos da linha e coluna:\n");
    
    // Pede para o usuário inserir os dados da matriz
    for(i=0; i<TAML; i++) {
        for(j=0; j<TAMC; j++) {
            printf("%d x %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Imprime a matriz na tela
    printf("\nMatriz:\n");
    for(i=0; i<TAML; i++) {
        for(j=0; j<TAMC; j++) {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nInsira a chave de busca: ");
    scanf("%d", &x);
    
    // Procura a chave na matriz
    for(i=0; i<TAML; i++) {
        for(j=0; j<TAMC; j++) {
            if(mat[i][j] == x) {
                achou = 1;
                lin = i;
                col = j;
                break;
            }
        }
        if(achou == 1) {
            break;
        }
    }
    
    // Se chave foi encontrada
    if(achou == 1) {
        printf("Linha: %d\tColuna: %d\n", i, j);
    } else {
        printf("Chave não encontrada.");
    }

    return 0;
}
