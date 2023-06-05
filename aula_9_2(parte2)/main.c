/******************************************************************************

                            Aula 9.2
                Link: https://youtu.be/StB43XBgP08
                    Revisar aula pra refazer

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include "poligonos.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, r;

    // -----------------  Perímetro do Triângulo  -----------------
    printf("Cálculo do perímetro do triângulo:\n");
    printf("Digite o valor do lado A: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B: ");
    scanf("%f", &b);

    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    printf("Perímetro Triângulo: %.2f\n", calcPerimetroTriangulo(a, b, c));
    printf("\n\n");

    // -----------------  Perímetro do Retângulo  -----------------
    printf("Cálculo do perímetro do retângulo:\n");
    printf("Digite o valor do lado A: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B: ");
    scanf("%f", &b);

    printf("Perímetro Retângulo: %.2f\n", calcPerimetroRetangulo(a, b));
    printf("\n\n");

    // ----------------- Perímetro do Círculo  -----------------
    printf("Cálculo do perímetro do círculo:\n");
    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    printf("Perímetro Círculo: %.2f\n", calcPerimetroCirculo(r));
    printf("\n\n");

    // -----------------  Área do Triângulo  -----------------
    printf("Cálculo da área do triângulo:\n");
    printf("Digite o valor da base: ");
    scanf("%f", &a);

    printf("Digite o valor da altura: ");
    scanf("%f", &b);

    printf("Área Triângulo: %.2f\n", calcAreaTriangulo(a, b));
    printf("\n\n");

    // -----------------  Área do Retângulo  -----------------
    printf("Cálculo da área do retângulo:\n");
    printf("Digite o valor da base: ");
    scanf("%f", &a);

    printf("Digite o valor da altura: ");
    scanf("%f", &b);

    printf("Área Retângulo: %.2f\n", calcAreaRetangulo(a, b));
    printf("\n\n");

    // -----------------  Área do Círculo  -----------------
    printf("Cálculo da área do círculo:\n");
    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    printf("Área Círculo: %.2f\n", calcAreaCirculo(r));
    printf("\n\n");

    return 0;
}

/*******************************************************************************
 main(): o programa é apenas uma função
 ------------------------------------------------------------------------
 Parâmetros de um programa:
    int argc
    char *argv
    
 Sintaxe correta do main():
    int main(int arg, char *argv[]) {...}
    
    argc   contador
    argv   conteúdo
    
 ************************************************************************
 Projeto ganhando corpo
 ---------------------------------------------------------------------
 Integrar arquivos fonte distintos: #include
 
 Arquivos .h:
    Variáveis globais
    Protótipos de função
    Definição de novos tipos 
 
 Arquivos .c:
    Implementação da lógica

  Arquivos .h: inforam à máquina o que existe
  Arquivos .c: informa o que deve ser feito com o que existe 
 
*******************************************************************************/
 
