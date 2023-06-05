/******************************************************************************

                            Exercício 2
                Link: https://youtu.be/NX68AN6qTDY

*******************************************************************************/

/* Faça um programa que receba o salário de um
    funcionário e o percentual de aumento, calcule
    e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float salario, percentual, aumento, novo_salario;
    
    printf("Qual seu salário atual?\t\tR$");
    scanf("%f", &salario);
    
    printf("Qual o percentual de aumento?\t");
    scanf("%f", &percentual);
    
    aumento = salario * percentual/100;
    novo_salario = salario + aumento;
    
    printf("\n\n");
    printf("Valor do aumento: %.2f\n", aumento);
    printf("Novo salário: %.2f\n", novo_salario);

    return 0;
}
