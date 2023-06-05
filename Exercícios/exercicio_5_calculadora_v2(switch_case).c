/******************************************************************************

                            Exercício 5
                Link: https://youtu.be/vO_PV_OYbvA

*******************************************************************************/

/*  Desenvola um algoritmo que simule uma calculadora. Você deve dar a
    opção de o usuário escolher entre: 1 - somar, 2 - subtrair, 3 - multi-
    plicar e 4 - dididir. O usuário só conseguirá processar dois números
    por vez. */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int operacao;
    float num1, num2, calc;

    printf("Bem-vindo(a) à calculadora!\n");
    printf("Escolha 1 para somar\n\t2 para subtrair\n\t3 para multiplicar\n\t4 para dividir.\n\n");

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("\nEscolha a operação: ");
    scanf("%d", &operacao);
    
    if(operacao<1 || operacao>4) {
        printf("\nOperação inexistente! Faça novamente a escolha: ");
        scanf("%d", &operacao);
    }
    
    if((operacao==4 && num2==0)) {
        printf("\nNão existe divisão por zero. Faça novamente a escolha do num 2: ");
        scanf("%f", &num2);
    }
    
    printf("\n\n");
    
    switch(operacao) {
        case 1:
            calc = num1 + num2;
            printf("Soma: %.2f.\n", calc);
            break;
        
        case 2:
            calc = num1 - num2;
            printf("Diferença: %.2f.\n", calc);
            break;
        
        case 3:
            calc = num1 * num2;
            printf("Produto: %.2f.\n", calc);
            break;
        
        case 4:
            calc = num1 / num2;
            printf("Quociente: %.2f.\n", calc);
            break;
    }
    
    return 0;
}
