/******************************************************************************

                            Aula 2.1
                Link: https://youtu.be/eK9lfMmkDe0 

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
    
    printf("Valor inteiro: %d.\n", 10);
    printf("Valor real: %f.\n", 3.14159265);
    printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265);
    
    printf("Dado de texto: %c.\n", 'a');
    printf("Dado de texto: %s.\n", "testando");

    //return 0;
}

/*******************************************************************************
 
 Especificadores de formato: printf()
 
 digito                     Descrição
 -----------------------------------------------------------------------
 d ou i     Números inteiros em base decimal 
 x          Números inteiros em base hexadecimal
 f          Números em ponto flutuante (com casas decimais)
 e          Números em notação científica (com casas decimais)
 c          Caracteres alfanuméricos (texto)
 s          Sequência de caracteres alfanuméricos (texto)
 .<num>     Especifica quantos dígitos serão impressos após vírgula

*******************************************************************************
 
Sequências de escape        Descrição
-----------------------------------------------------------------------
\a          Toca um bipe, alarme sonoro padrão do sistema
\b          Backspace
\n          Qubra de linha
\t          Tabulação horizontal (TAB)
\r          Retorna ao início da linha
\0          Caracter nulo
\v          Tabulação vertical

\\          Caracter \
\'          Caracter '
\"          Caracter "
\?          Caracter ?
\123        Caracter relacionado ao código 123 em octal (ASCII)
\X12        Caracter relacionado ao código 12 em hexadecimal (ASCII)
%%          Caracter %

*******************************************************************************/
