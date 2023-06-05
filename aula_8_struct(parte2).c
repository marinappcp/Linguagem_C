/******************************************************************************

                            Aula 8
                Link: https://youtu.be/-SgbvUL2UVc

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 3

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
  
    tipo_pessoa lista[TAM];
    int i;
    
    for(i=0; i<TAM; i++) {
        printf("\nInsira os dados da pessoa %d:\n", i+1);
        printf("Nome: ");
        scanf(" %50[^\n]s", lista[i].nome);
        //fflush(stdin);
        limparBufferEntrada(); // Chamada da função para limpar o buffer de entrada
        
        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);
        
        printf("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    } 
    //system("cls");  // limpar tela
    
    puts("Seus dados:\n");
    for(i=0; i<TAM; i++) {
        printf("\n------------------ Pessoa %d -----------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d anos\n", lista[i].idade);
        printf("\tPeso: %.2f kg\n", lista[i].peso);
    }
    printf("---------------------------------------------------\n");
    
    return 0;
}

/*******************************************************************************
 Structs
 ---------------------------------------------------
 Definindo novo tipo
    ¬ typedef
 Declarando variáveis do novo tipo
 Acessando membros de uma variável struct
 
 Sintaxe de definição
    struct <novo_tipo> {
        <tipo1> <campo1>
        <tipo2> <campo2>
        ...
        <tipoN> <campoN>
    };

***********************************************************
 Comando typedef: renomeia um identificador
 ---------------------------------------------------
 Sintaxe:
    typedef <tipo> <novo_nome>;
    
 Sintaxes de declaração de variável struct
    struct <novo_tipo> <nome_variável>;
        <novo_nome> <nome_variável>;
 
***********************************************************       
 É preciso haver uma variável desse tipo declarada
 Sintaxe:
    <variável>.<campo>
 Fato: é comum misturar vetores e structs!

*******************************************************************************/
 
