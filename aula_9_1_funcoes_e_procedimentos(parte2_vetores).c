/******************************************************************************

                            Aula 9.1
                Link: https://youtu.be/jd9PABbIvbA

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void imprime1 (int v[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
}

void imprime2 (int v[5]) {
    int i;
    for(i=0; i<5; i++) {
        printf("%d ", v[i]);
    }
}

void imprime3 (int *v, int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
}

int main() {
    int vet[5] = {1,2,3,4,5};
    
    printf("Primeiro imprime:\t");
    imprime1(vet, 5);
    
    printf("\nSegundo imprime:\t");
    imprime2(vet);
    
    printf("\nTerceiro imprime:\t");
    imprime3(vet, 5);
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
 
