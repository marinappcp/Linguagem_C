/******************************************************************************

                            Aula 6.2
                Link: https://youtu.be/4x7Qht5Dmcw

*******************************************************************************/

#include <stdio.h> 
int main(){

    char s[10];
    
    printf("\nDigite algo (leitura pelo gets): "); 
    gets(s);
    fflush(stdin);
    
    puts("Resultado: ");
    puts(s);
    puts("");
    
    printf("-------------------------------------------------------\n");
    printf("Digite algo (leitura pelo fgets): ");
    fgets(s, 10, stdin);
    fflush(stdin);
    
    puts("Resultado: ");
    puts(s);
    puts("");
}

/*******************************************************************************
 gets: função de entrada
    gets(<string>);
    
 fgets()
    Último caractere sempre fica reservado ao '\0'
    Entrada padrão: stdin
    Sintaxe
        fgets(<string>, <tam.>, stdin);
        
 puts()
    Imprime uma string diretamente na tela 
    Não admite variáveis de outrod tipos
    Sintaxe
        puts(<string>);
        
*******************************************************************************/
