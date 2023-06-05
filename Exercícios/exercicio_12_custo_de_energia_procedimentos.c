/******************************************************************************

                            Exercício 12
                Link: https://youtu.be/GO_cOmumDtE

*******************************************************************************/

/*  5) (Adaptado de ASCENCIO e CAMPOS, 2008) Sabe-se que o quilowatt de energia 
    custa um milésimo do salário mínimo. Faça um procedimento que receba o valor 
    do salário minimo e quantidade de quilowatts consumida por uma residência. 
    O procedimento deve calcular e retornar através de passagem de parámetros 
    por referència:

    a) o valor, em reais, de cada quilowatt; 
    b) o valor, em reais, à ser pago por essa residència; 
    c) o valor, em reais, a ser pago com desconto de 15%

    Sabendo disso, desenvolva um algoritmo que peça para o usuário inserir o va-
    lor do salário mínimo e a quantidade de quilowatts consumida invoque o res-
    pectivo procedimento e mostre, na tela, as informações dos itens a, b, c. */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define DESCONTO 0.15

//                   Valores entrada                     // Valores referência
void calcularValores(float sal_min, float kw_cons, float *v_kw, float *v_gasto, float *v_desconto);

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    float sal_min, kw_cons, v_kw, v_gasto, v_desconto;

    printf("Insira o valor do salário mínimo: R$");
    scanf("%f", &sal_min);

    printf("Insira a quantidade de KW consumida: ");
    scanf("%f", &kw_cons);

    //                                Parâmetros
    calcularValores(sal_min, kw_cons, &v_kw, &v_gasto, &v_desconto);

    printf("\nValor, em reais, de cada KW: R$%.2f\n", v_kw);
    printf("Valor, em reais, a ser pago por essa residência: R$%.2f\n", v_gasto);
    printf("Valor, em reais, a ser pago com desconto de 15%%: R$%.2f\n", v_desconto);

    return 0;
}

void calcularValores(float sal_min, float kw_cons, float *v_kw, float *v_gasto, float *v_desconto) {
    *v_kw = sal_min / 1000;
    *v_gasto = *v_kw * kw_cons;
    *v_desconto = *v_gasto * (1 - DESCONTO);
}
