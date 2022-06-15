#include <stdio.h>
#include <stdlib.h>
#include <locale.h>     //conceder emprestimo apenas se for menor que 30% do salario.

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");


float salbruto, prestacao;


 printf("Por favor, Digite seu salário (bruto):\n");
    scanf("%f", &salbruto);

 printf("Agora, o valor da sua prestação:\n");
    scanf("%f", &prestacao);

salbruto = salbruto * 0.3;



   if ( prestacao <= salbruto) {

     printf("Seu emprestimo é de: %2.f \n", prestacao);

   } else {

     printf("EMPRESTIMO NAO PODE SER CONSEDIDO\n");
  }


return 0;

}
