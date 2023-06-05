/******************************************************************************

                            Exercício 10
                Link: https://youtu.be/2uU2tv_mfLI

*******************************************************************************/

/*  O custo de um carro novo ao consumidor final é o preço de fábrica somado
    ao percentual de lucro do distribuidor, acrescido dos impostos aplicados
    ao preço de fábrica. Faça um programa que receba o preço de fábrica de um
    veículo, o percentual de lucro do distribuidor e o percentual de impostos.
    
    Em cada item, crie uma função distinta para calcular e retornar:
    
    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o preço final do veículo.
    
    Após criar cada um das funções, desenvolva um algoritmo que declare e
    invoque cada uma das. */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// custo_carro = preco_fabrica + perc_lucro + impostos_fabr

float lucro_distr (float preco_fabrica, float perc_lucro);

float impostos (float preco_fabrica, float perc_impostos);

float custo_carro (float preco_fabrica, float perc_lucro, float perc_impostos);

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    float preco_fabrica, perc_lucro, perc_impostos;
    float lucroDistr, impostosFabr, custoFinal;
    
    printf("Insira o preço de fábrica: R$");
    scanf("%f", &preco_fabrica);
    
    printf("Insira o percentual de lucro do distribuidor: ");
    scanf("%f", &perc_lucro);
    
    printf("Insira o percentual de imposto: ");
    scanf("%f", &perc_impostos);
        
    lucroDistr = lucro_distr(preco_fabrica, perc_lucro);
    
    impostosFabr = impostos(preco_fabrica, perc_impostos);
    
    custoFinal = custo_carro(preco_fabrica, lucroDistr, impostosFabr);
    
    printf("\nLucro do distribuidor: RS%.2f\n", lucroDistr);
    printf("\nLucro do Impostos: RS%.2f\n", impostosFabr);
    printf("\nCusto final do carro: RS%.2f\n", custoFinal);

    return 0;
}

float lucro_distr (float preco_fabrica, float perc_lucro) {
    return preco_fabrica * perc_lucro/100;
}

float impostos (float preco_fabrica, float perc_impostos) {
    return preco_fabrica * perc_impostos/100;
}

float custo_carro (float preco_fabrica, float valor_distr, float valor_impostos) {
    return preco_fabrica + valor_distr + valor_impostos;
}
    
