/******************************************************************************

                            Aula 4.3
                Link: https://youtu.be/xgwrJNZGo24

*******************************************************************************/

#include <stdio.h>

int main () {
  int d;

  printf ("Insira um valor de 1 a 7: ");
  scanf ("%d", &d);

  printf ("\n-----------------------------\n");
  printf ("Dia da semana: ");

  switch (d)
    {
    case 1:
      printf ("Domingo.\n");
      break;

    case 2:
      printf ("Segunda-feira.\n");
      break;

    case 3:
      printf ("TerC'a-feira.\n");
      break;

    case 4:
      printf ("Quarta-feira.\n");
      break;

    case 5:
      printf ("Quinta-feira.\n");
      break;

    case 6:
      printf ("Sexta-feira.\n");
      break;

    case 7:
      printf ("Sábado.\n");
      break;

    default:
      printf ("Valor inválido!\n");
      break;
    }
}

/*******************************************************************************
 Comando switch-case:
 ----------------------------------------------
    C	 como se fossem vC!rios if em sequC*ncia
    
    Util para comparar uma C:nica
        Somente comparaC'C5es de igualdade
        
    Caso seja igual a 1 dos valores:
        Executa o respectivo bloco
        Ignora todos os outros blocos

*******************************************************************************/

/*******************************************************************************
 Estrutura de decisC5es compostas:
 ----------------------------------------------
 
 switch(<var>) {
     case <v1>:
        <bloco_de_comandos1>
        break;
        
    case <v2>:
        <bloco_de_comandos2>
        break;
        
    case <vN>:
        <bloco_de_comandosN>
        break;
        
    default:
        <bloco_de_comandos_padrC#o>
        break;
 }

*******************************************************************************/
