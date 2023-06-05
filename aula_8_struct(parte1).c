/******************************************************************************

                            Aula 8
                Link: https://youtu.be/-SgbvUL2UVc

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa {
  int idade;
  float peso;
  char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};
    
    printf("\nInício:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

  // Atribuindo valores aos campos
  pes.idade = 10;
  pes.peso = 99.99;
  strcpy(pes.nome, "Texto");

  printf("\n\n*******************************************\n\n");
  printf("Alternando os campos via código:\n");
  printf("pes.idade: %d\n", pes.idade);
  printf("pes.peso: %.2f\n", pes.peso);
  printf("pes.nome: %s\n", pes.nome);

  // Solicitando inserções via teclado
  printf("\n\n******************************************\n\n");
  printf("Insira os dados a seguir:\n");
  
  printf("Digite a idade (número inteiro): ");
  scanf("%d", &pes.idade);
  
  printf("Digite o peso(número real): ");
  scanf("%f", &pes.peso);
  fflush(stdin);
  printf("Digite o nome: ");
  scanf("%s", &pes.nome);
  
  printf("\n\n*******************************************\n\n");
  printf("Alternando com os dados do usuário:\n");
  printf("pes.idade: %d\n", pes.idade);
  printf("pes.peso: %.2f\n", pes.peso);
  printf("pes.nome: %s\n", pes.nome);
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
 
