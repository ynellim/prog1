#include <stdio.h>
#include <stdlib.h>
#include <locale.h>     //verificar se um número é maior.

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");


int num1, num2, num3;


 printf("Por favor, digite um número:\n");
  scanf("%d",&num1);

 printf("Por favor, digite um número:\n");
  scanf("%d",&num2);

  printf("Por favor, digite um número:\n");
  scanf("%d",&num3);



     if (num1 > num2 && num1 > num3) {

        printf("O maior número é: %d", num1);
     }


     else if (num2 > num1 && num2 > num3) {

         printf("O maior número é: %d\n", num2 );

     }


 else {

    printf("Maior número é: %d\n ", num3);
 }


     return 0;

 }
