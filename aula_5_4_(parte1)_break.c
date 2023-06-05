/******************************************************************************

                            Aula 5.4
                Link: https://youtu.be/iWYLDyX6OsY

*******************************************************************************/

#include <stdio.h>

int main () {
    int i; 
    
    for(i=1; i<=10; i++) {
        printf("Valor de i = %d\n", i);
        
        if(i == 5) {
            break;
        }
    }
}

/*******************************************************************************
 Comando break
    Utilizado para encerrar por completo uma sequências de repetições
    
 Comando continue
    Utilizado para encerrar a iteração atual, passando para a próxima repe-
    tição
    
*******************************************************************************/