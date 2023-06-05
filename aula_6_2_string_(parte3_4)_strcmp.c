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

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;
    
    printf ("\nDigite um texto: ");
    gets(senha_usr);
    
    ok = strcmp(hardText, senha_usr);
    
    printf("\nStatus: ");
    if(ok == 0) {
        printf("Textos iguais.\n");
    } 
    else {
        printf("Textos diferentes.\n");
    }
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
