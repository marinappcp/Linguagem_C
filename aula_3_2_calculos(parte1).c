/******************************************************************************

                            Aula 3.2
                Link: https://youtu.be/kksV1wmnBe8

*******************************************************************************/

#include <stdio.h>

int main() {
    int A, B, soma, subtr, mult, divis;
    
    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);
    
    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;
    
    printf("\n------------------------\n");
    printf("Resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtração: %d.\n", subtr);
    printf("Multiplicação: %d.\n", mult);
    printf("Divisão: %d.\n", divis);
}


/*******************************************************************************
 
 Atribuições aritméticas
 ------------------------
 Incremento em 1 unidade    ++
 Decremento em 1 unidade    -- 
 Incremento genérico        +=
 Decremento genérico        -=
 Atribuição com multiplicação   *=
 Atribuição com divisão         /=

*******************************************************************************/
 
