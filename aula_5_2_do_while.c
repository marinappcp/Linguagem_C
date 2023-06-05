/******************************************************************************

                            Aula 5.2
                Link: https://youtu.be/GGHR93PKsXc

*******************************************************************************/

#include <stdio.h>

int main () {
    int i=1; 
    
    do {
        printf("Valor de i = ");
        printf("%d\n", i);
        i++;
    } while(i <= 10);
}

/*******************************************************************************
 Comandos do-while
 ----------------------------------------------
 Similar ao while:
    inicialização, condição, atualização
    
 Diferença crucial:
    Condição avaliada somente no final
    Bloco de comandos é exceutado, obrigatoriamente, ao menos 1x
    
 ---------------------------------------------------------------------------
 
 Sintae
 ----------------------------------------------
 do {
    <bloco_de_comandos>
 } while(<condição>);
 
*******************************************************************************/