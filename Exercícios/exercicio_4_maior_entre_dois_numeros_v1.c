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

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    float num1, num2;
    
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);
    
    if(num1 == num2) {
        printf("Os números são iguais");
    } else if (num1 > num2) {
        printf("O maior é %.2f.", num1);
    } else {
        printf("O maior é %.2f", num2);
    }
    
    return 0;
}
