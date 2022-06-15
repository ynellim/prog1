#include <stdio.h>
#include <stdlib.h>
#include <locale.h>   //calculadora de idade.

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");


 int ano_atual, ano_nascimento, idade;



 printf("....Vamos calcular sua idade!!\n\n");

 printf("Por favor, digite o ano de seu nascimento:\n");
    scanf("%d", &ano_nascimento);

 printf("Agora, digite o ano atual que estamos:\n");
    scanf("%d", &ano_atual);


  idade = ano_atual - ano_nascimento;

        if (ano_nascimento > ano_atual || ano_nascimento <= 1900){

        printf("Por favor informe uma data válida!\n");


        }

     else {

        printf("Sua idade é de: %d anos", idade );
     }


 return 0;

 }
