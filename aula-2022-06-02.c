/*

 variaveis: 
   reais: entrada, saida, saldoinicial, saldo
 inicio:
   para i=0 até 5, faça:
     perguntar o saldo inicial
     ler o saldo inicial em "saldoinicial'
     perguntar o valor de entrada
     ler o valor de entrada em "entrada"
     perguntar o valor de saída
     ler o valor de saída em "saida"
  saldo = saldoinicial + entrada - saida
     se saldo for maior que 2000:
     imprimir o valor total recebido "entrada"
     imprimir o valor total pagamentos "saida"
     imprimir o valor positivo atual "saldo"
     
    
  então se for menor de 500:
     imprimir o valor total recebido "entrada"
     imprimir o valor total pagamentos "saida"
     imprimir o valor negativo atual "saldo"
     
  senão 
   imprimir error
     
*/



#include <stdio.h>
#include <stdlib.h>

void main()
{

 int i;
 float entrada, soma_entrada, saida, saldoinicial, saldo;                    /* saldo inicial = saldo que se inicia o dia
 float soma_entrada = 0, soma_saida = 0;

                                                                entrada = Os valores de entrada são as vendas que você lança dia a dia
                                                                Saída = Os valores de saída representam as suas despesas
                                                                Saldo = valor que você possui no final do dia, depois que suas entradas e saídas foram lançadas */
 
 for(i=0; i<5; i++) {

    printf("\n\nOla senhor Inacio! irei calcular seu FLUXO DE CAIXA.\n\n");

  printf("Por favor digite o saldo inicial:\n");
   scanf("%f", &saldoinicial);

  printf("Por favor digite o valor de sua entrada:\n");
   scanf("%f", &entrada);
  
 soma_entrada = soma_entrada + entrada;
  
  printf("Por favor digite os valores que representa a saida:\n");
   scanf("%f", &saida);
  
 soma_saida = soma_saida + entrada; 


}

  saldo = (soma_entrada + soma_saida);

   if(saldo > 2000) {

        printf("O valor total recebido eh de: %2.f\n", entrada);
        printf("O valor total pagamentos eh de: %2.f\n", saida);
        printf("O valor positivo atual eh de: %2.f\n", saldo);
   }

   else if(saldo < 500) {

        printf("O valor total recebido e de: %2.f\n", entrada);
        printf("O valor total pagamentos e de: %2.f\n", saida);
        printf("VALOR NEGATIVADO de: %2.f\n\n", saldo);

   }

   else {

    printf("ERROR\n");


   }

}

