/******************************************************************************

                            Aula 9.2
                Link: https://youtu.be/StB43XBgP08
                    Revisar aula pra refazer

*******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    
    if(argc > 1) {
        printf("Foram inseridos %d argumentos: ", argc);
        for(i=0; i<argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("Não foram inseridos argumentos no programa.\n");
    }
  }


/*******************************************************************************
 main(): o programa é apenas uma função
 ------------------------------------------------------------------------
 Parâmetros de um programa:
    int argc
    char *argv
    
 Sintaxe correta do main():
    int main(int arg, char *argv[]) {...}
    
 ************************************************************************
 * argc: é um dado inteiro que eu posso usar dentro do meu código para 
    eu saber quantos argumentos foram passados para o meu programa 
    quando eu for executar o programa da tela preta (prompt de comandos).
    ¬ Conta todas as palavras digitadas por espaço no 
        prompt de comandos
    
 * argv: guarda todo o texto digitado na linha de comando do prompt de 
    comandos.
    
   argc   contador
   argv   conteúdo
 
*******************************************************************************/
 
