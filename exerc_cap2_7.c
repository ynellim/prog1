#include <stdio.h>
#include <stdlib.h>    // analisar se um número está entre 20 e 50.
#include <locale.h>

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");
    int num;


    printf("Por favor digite um número:\n");
    scanf("%d", &num);



    if(num >= 20 && num <= 50) {
        printf("Seu número %d está na lista\n", num);
    }else {
        printf("Infelizmente seu número não se encontra nesse roll\n");
    }

    return 0;

 }
