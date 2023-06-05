/******************************************************************************

                            Aula 9.1
                Link: https://youtu.be/jd9PABbIvbA

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

float maior(float num, float num2);


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

float maior(float num1, float num2) {
    if(num1 > num2)
        return num1;
    else 
        return num2;
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
 
 *************************************************************
 Declaração de uma função em C deve aparecer antes do main()
 Sintaxe de protótipo de função:
    <tipo> <nome_da_função>(<parâmetros>);
 
 *************************************************************
 Parâmetros de funções distintas
 -----------------------------------------------
 Sintaxe para parâmetros struct:
    <tipo> <função>(<tipo_struct> <param>) {...}
    
 Sintaxes para vetores/matrizes como parâmetro
    <tipo> <função> (<tipo> <vet>[], int tam) {...}
        <tipo> <função> (<tipo> <vet>[tam]) {...}
        <tipo> <função> (<tipo> *<vet>, int tam) {...}
    <tipo> <função> (<tipo m[] [<tam2>], int tam1) {...}
 
*******************************************************************************/
 
