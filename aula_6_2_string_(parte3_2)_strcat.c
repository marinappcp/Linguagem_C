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

    char s1[N] = {"Lógica de "};
    char s2[N] = {"Programação!"};
    
    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);
    
    strcat(s1, s2);
    
    printf("\n-------------------------\n");
    printf("Depois do strcat:\n");
    puts(s1);
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
