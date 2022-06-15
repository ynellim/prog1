#include <stdio.h>
#include <stdlib.h>
#include <locale.h>            //saber se um numero é divisil por 3 e por 7.

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");

int num;


 printf("Por favor digite um número qualquer:\n");
  scanf("%d", &num);

 if (( num % 3) == 0 && (num % 7) == 0) {

        printf("Seu numero .... %d .... é divisivel por 3 e por 7\n", num);

 }else {
        printf("NÃO é divisivel\n");

     }


  return 0;

 }
