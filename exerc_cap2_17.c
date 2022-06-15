#include <stdio.h>
#include <stdlib.h>
#include <locale.h>              //informar idade e nome para classificar em um grupo

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");


int idade;
char nome[20];

 printf("Por favor, digite  seu nome:\n");
  scanf("%s", &nome);

 printf("Por favor, digite  sua idade:\n");
  scanf("%d", &idade);



  switch(idade) {
        case 0 ... 10:
            printf("%s  o valor do seu plano é de R$30.00\n", nome);
            break;

        case 11 ... 29:
           printf("%s o valor do seu plano é de R$60.00\n", nome);
            break;

        case 30 ... 45:
            printf("%s  o valor do seu plano é de R$120.00\n", nome);
            break;

        case 46 ... 59:
            printf("%s  o valor do seu plano é de R$150.00\n", nome);
            break;

        case 60 ... 65:
            printf("%s o valor do seu plano é de R$250.00\n", nome);
            break;

        default:
            printf("%s , o valor do seu plano é de R$400.00\n", nome);
    }




return 0;

 }
