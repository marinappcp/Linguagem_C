/******************************************************************************

                            Aula 9.1
                Link: https://youtu.be/jd9PABbIvbA

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

float maior(float num1, float num2) {
    if(num1 > num2)
        return num1;
    else 
        return num2;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
  
    float x, y, m;
    
    printf("Insira um valor: ");
    scanf("%f", &x);
    
    printf("Insira mais um valor: ");
    scanf("%f", &y);
    
    m = maior(x, y);
    printf("Maior: %.2f\n", m);
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
 
*******************************************************************************/
 
