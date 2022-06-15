#include <stdio.h>
#include <stdlib.h>
#include <locale.h>              //informar idade e classificar o usuario em um grupo

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");

int idade;


 printf("Nadador, por favor informe sua idade\n");
  scanf("%d", &idade);

if ( idade >= 5 && idade <= 7){
    printf("Grupo infantil A\n");
}

else if ( idade >= 8 && idade <= 10){
    printf("Grupo infantil B\n");
}

else if ( idade >= 11 && idade <= 13){
    printf("Juvenil A\n");
}
else if ( idade >= 14 && idade <= 17){
    printf("Juvenil B\n");
} else {
    printf("Sênior\n");
}

return 0;

 }
