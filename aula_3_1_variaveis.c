/******************************************************************************

                            Aula 3.1
                Link: https://youtu.be/tfLC_huv-Ko

*******************************************************************************/

#include <stdio.h>
#define texto "Entrada e saída de dados."

int main() {
    printf("%s\n", texto);
    
    int idade = 0;
    float altura = 0;
    char nome[50] = "";
    
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    
    printf("Digite a altura:\n");
    scanf("%f", &altura);
    
    printf("Digite o nome:\n");
    scanf("%s", &nome);
    
    printf("\n-------------------------\n");
    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.\n", nome);
}

