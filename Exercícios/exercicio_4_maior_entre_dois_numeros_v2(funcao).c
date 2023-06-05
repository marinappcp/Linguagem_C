/******************************************************************************

                            Exercício 4
                Link: https://youtu.be/zkuvNxD0eAk

*******************************************************************************/

/*  Faça um programa que receba dois números e mostre
    o maior deles. Caso eles sejam iguais, deve-se 
    mostrar a mensagem "Os números são iguais". */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maior(float num1, float num2) {
    if(num1 > num2)
        return num1;
    else {
        return num2;
    }
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    float x, y, m;
    
    printf("Digite dois númeors: ");
    scanf("%f %f", &x, &y);

    if(x == y) {
        printf("Os números são iguais.\n");
    } else {
        m = maior(x, y);
    printf("O maior é: %.2f\n", m);
    }
    
    return 0;
}
