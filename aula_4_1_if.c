/******************************************************************************

                            Aula 4.1
                Link: https://youtu.be/LQNzQCddjHQ 

*******************************************************************************/

#include <stdio.h>

int main() {
    float m;
    
    printf("Insira a nota: ");
    scanf("%f", &m);
    
    printf("\n---------------------\n");
    printf("Status: ");
    if(m >= 7.0) {
        printf("Aprovado(a)!\n");
    }
}
