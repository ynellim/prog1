#include <stdio.h>
#include <stdlib.h>

int main() {

int i,soma=0, escolha, venceu=1, perdeu=0;

 for(i=0; i<6; i++)  {
    printf("Por favor, digite 1 para venceu e 0 para perdeu:\n");
      scanf("%d",&escolha);
      soma += escolha;
      printf("Soma = %d\n", soma);
 }

if (soma>=1 && soma<=2 ) {
       printf("voce esta no grupo 1\n");}

else if (soma>=3 && soma<=4) {
     printf("voce esta no grupo 2\n");}

else if (soma > 6) {
     printf("voce esta no grupo 3\n");}

else {

    printf("voce nao foi selecionado, continue treinando.\n");}

return 0;
}
