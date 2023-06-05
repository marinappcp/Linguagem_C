/******************************************************************************

                            Exercício 1
                Link: https://youtu.be/wYMPW5v_wwM

*******************************************************************************/

// 1) Faça um programa que receba quatro números inteiros , 
// calcule e msotra a soma desses números

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int agrc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3, n4, soma;

    printf("Informe o primeiro valor:\t");
    scanf("%d", &n1);
  
    printf("Informe o segundo valor:\t");
    scanf("%d", &n2);
    
    printf("Informe o terceiro valor:\t");
    scanf("%d", &n3);
  
    printf("Informe o quarto valor:\t\t");
    scanf("%d", &n4);
    
    printf("\n");
    soma = n1 + n2 + n3 + n4; 
    printf("Resultado: %d + %d + %d + %d = %d", n1, n2, n3, n4, soma);
    
    return 0;
}