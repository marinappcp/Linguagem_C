/******************************************************************************

                            Aula 6.2
                Link: https://youtu.be/4x7Qht5Dmcw

*******************************************************************************/

#include <stdio.h> 
#include <string.h>
#include <locale.h>

#define N 50

int main(){
    setlocale(LC_ALL, "Portuguese");

    char s[N];
    int i;
    
    printf("Digite um texto: ");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);
    
    printf("Impressão de posição a posição:\n");
    for(i=0; i<strlen(s); i++) {
        printf("%c", s[i]);
    } //puts(s);
}

/*******************************************************************************
 Biblioteca string.h 
 ----------------------------------
 Sintaxes de funções importantes:
    strcpy(<destino>, <origem>);
    strcat(<destino>, <origem>);
    strlen(<string>);
    strcmp(<string1>, <string2>);
    
**************************************************************
 Biblioteca locale.h 
 ----------------------------------
 setlocale(LC_ALL, "Portuguese");
    
*******************************************************************************/
