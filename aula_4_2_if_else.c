/******************************************************************************

                            Aula 4.2
                Link: https://youtu.be/MGUpDTEc3SM

*******************************************************************************/

#include <stdio.h>

int main() {
    float m;
    
    printf("Insira a nota: ");
    scanf("%f", &m);
    
    printf("\n---------------------\n");
    printf("Status: ");
    
    if(m >= 7) {
        printf("Aprovado(a)!\n");
    }
    else {
        printf("Reprovado(a)!\n");
    }
}

/*******************************************************************************

 Operações lógicas
 
    Disjunção   &&
 
    Conjunção   ||
 
    Negação     !

*******************************************************************************/