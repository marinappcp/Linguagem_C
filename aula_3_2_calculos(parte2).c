/******************************************************************************

                            Aula 3.2
                Link: https://youtu.be/kksV1wmnBe8

*******************************************************************************/

#include <stdio.h>

int main() {
    int dado = 10;
    printf("Dado antes do incremento: %d.\n");
    
    dado++;
    printf("Depois do incremento: %d.\n", dado);
    
    dado--;
    printf("Depois do decremento: %d.\n", dado);
    
    dado+=3;
    printf("Depois do incremento em 3 unidades: %d.\n", dado);
    
    dado-=2;
    printf("Depois do decremento em 2 unidades: %d.\n", dado);
    
    dado*=10;
    printf("Depois de multiplicar por 10: %d.\n", dado);
    
    dado/=5;
    printf("Depois de dividir por 5: %d.\n", dado);
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
 
