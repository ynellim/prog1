#include <stdio.h>
#include <stdlib.h>
#include <locale.h>              //informar saldo e  para classificar em um grupo

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");


float saldo;

 printf("Por favor, digite  seu saldo:\n");
  scanf("%f", &saldo);



  switch(abs(saldo)) {
        case 0 ... 500:
            printf("NENHUM SALDO\n");
            break;

        case 501 ... 1000:
            printf(" seu saldo é de: %2.f\n", saldo*0.3 + saldo) ;
            break;

        case 1001 ... 3000:
            printf(" seu saldo é de: %2.f\n", saldo*0.4 + saldo);
            break;


        default:
            printf(" seu saldo é de: %2.f\n",saldo*0.5 + saldo);
    }




return 0;

 }
