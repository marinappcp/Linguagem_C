/******************************************************************************

                            Exercício 6
                Link: https://youtu.be/yIHieUJH2wI

*******************************************************************************/

/*  A nota final de um estudante é calculada a partir de três notas atribuídas 
respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um 
exame final. A média das três notas mencionadas anteriormente obedece aos pesos 
a seguir:

Nota                Peso
-----------------------------
Trab. Lab.          2
Av. Sem.            3
Ex. Final           5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e 
o conceito que segue a tabela abaixo:

Média ponderada    Conceito
-----------------------------
8,0 ~ 10,0         A
7,0 ~ 8,0          B
6,0 ~ 7,0          C
5,0 ~ 5,0          D
0,0 ~ 5,0          E
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PES_TRAB 2 
#define PES_AV_SEM 3 
#define PES_EX_FIN 5 

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    float trab, av_sem, ex_fin, media;
    
    printf("Digite a nota do trabalho: ");
    scanf("%f", &trab);
    
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &av_sem);
    
    printf("Digite a nota do exame final: ");
    scanf("%f", &ex_fin);
    
    media = (PES_TRAB*trab + PES_AV_SEM*av_sem + PES_EX_FIN*ex_fin) / (PES_TRAB + PES_AV_SEM + PES_EX_FIN);
    
    printf("\nMédia = %.2f\n\n", media);
    
    if(media<=10 && media>=8) {
        printf("Conceito A.\n");
    } else if (media<8 && media>=7) {
        printf("Conceito B.\n");
    } else if (media<7 && media>=6) {
        printf("Conceito C.\n");
    } else if (media<6 && media>=5) {
        printf("Conceito D.\n"); 
    } else {
        printf("Conceito E.\n");
    }
    
    return 0;
}
