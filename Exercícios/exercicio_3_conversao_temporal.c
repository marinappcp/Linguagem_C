/******************************************************************************

                            Exercício 3
                Link: https://youtu.be/Ox3SX_JULHk

*******************************************************************************/

/*  Jeremias possui um cronômetro que consegue marcar o tempo 
    apenas em segundos. Sabendo disso, desenvolva um algoritmo que 
    receba o tempo cronometrado, em segundos, e diga quantas horas, 
    minutos e segundos se passaram a partir do tempo cronometrado.  */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int seg, min, hr;
  
    printf("Informe o tempo em segundos: ");
    scanf("%d", &seg);

    hr = seg / 3600; // Obtém a quantidade de horas
    seg %= 3600;    // Obtém o restante dos segundos após a conversão em horas
    
    min = seg / 60; // Obtém a quantidade de minutos
    seg %= 60;      // Obtém o restante dos segundos após a conversão em minutos
    
    /*// 1h = 3600 segs  1 min = 60 segs 
    hr = seg / 3600;
    seg = seg - (3600*hr);
        
    min = seg / 60;
    seg = seg - (60*min);
    */

    printf("\n\n");
    if(hr<10 || min<10 || seg<10) {
        printf("Horário: 0%d:0%d:0%d\n.", hr, min, seg);
    } else {
        printf("Horário: %d:%d:%d\n.", hr, min, seg);  
    }
  
    return 0;
}
