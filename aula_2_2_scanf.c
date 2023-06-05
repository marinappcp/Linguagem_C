/******************************************************************************

                            Aula 2.2
                Link: https://youtu.be/cKagvm-BiwI

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0;
    float peso = 0.0;
    
    printf("Digite uma idade:\n");
    scanf("%d", &idade);
    
    printf("Digite um peso:\n");
    scanf("%f", &peso);
    
    printf("Idade informada: %d.\n", idade);
    printf("Peso informado: %f.\n", peso);
}

/*******************************************************************************
 
 Sintaxe scanf:
    scanf(<form.>, &<v1>, &<v2>, ..., &<vN>)
    
 Uso:
    1 ou N variáveis

*******************************************************************************/

/*******************************************************************************
 
 Especificadores de formato: scanf()
 
 digito                     Descrição
 -----------------------------------------------------------------------------
 d ou i     Números inteiros em base decimal 
 x          Números inteiros em base hexadecimal
 f          Números em ponto flutuante (com casas decimais)
 e          Números em notação científica (com casas decimais)
 c          Caracteres alfanuméricos (texto)
 s          Sequência de caracteres alfanuméricos (texto)
 [^chars]   Lê todos os dados digitados, exceto os especificados em "chars"

*******************************************************************************/
 
