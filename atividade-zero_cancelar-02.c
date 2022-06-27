#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


 int main ()
 {
     setlocale(LC_ALL, "Portuguese");


int i=1, qntdvendas=0;
float vendas=-1.0, soma=0.0;

   while (vendas!=0.0) {

    printf("Por favor digite a valor da venda:\n");
     scanf("%f", &vendas);
     soma += vendas;
     printf("Soma = %2.f\n", soma);
     }


return 0;

     }
