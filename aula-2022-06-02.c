/* ALGORITMO: primeiramente comecei incluindo a biblioteca, denominei minha função principal e declarei minhas variaveis,
 usei o for para criar o meu looping semanal que é pedido no problema, usei o printff + scanf para o meu codigo interagir com o usuario e armazenar os valores digitados
 após isso usei a variavel saldo para representar minha conta feita para calcular esse fluxo de caixa.
E, por fim usei minha estrutura de decisão para imprimir o resultado e finalizar a questão. */



#include <stdio.h>
#include <stdlib.h>

void main()
{

 int i;
 float entrada, saida, saldoinicial, saldo;                    /* saldo inicial = saldo que se inicia o dia

                                                                entrada = Os valores de entrada são as vendas que você lança dia a dia
                                                                Saída = Os valores de saída representam as suas despesas
                                                                Saldo = valor que você possui no final do dia, depois que suas entradas e saídas foram lançadas */
   for(i=0; i<5; i++) {

    printf("\n\nOla senhor Inacio! irei calcular seu FLUXO DE CAIXA.\n\n");

  printf("Por favor digite o saldo inicial:\n");
   scanf("%f", &saldoinicial);

  printf("Por favor digite o valor de sua entrada:\n");
   scanf("%f", &entrada);

  printf("Por favor digite os valores que representa a saida:\n");
   scanf("%f", &saida);

}

  saldo = (saldoinicial + entrada - saida);

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

