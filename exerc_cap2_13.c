#include <stdio.h>
#include <stdlib.h>
#include <locale.h>   //media de notas usando switch

 int main ()
 {
     setlocale(LC_ALL, "Portuguese");

    float p1, p2, p3, media;

    printf("Por favor, digite a nota da sua P1:\n");
    scanf("%f", &p1);

    printf("Por favor, digite a nota da sua P2:\n");
    scanf("%f", &p2);

    printf("Por favor, digite a nota da sua P3:\n");
    scanf("%f", &p3);

    media = (p1*p2*p3)/3;

    switch(abs(media)) {
        case 7 ... 10:
            printf("Aprovado!\n");
            break;

        case 3 ... 6:
            printf("Prova final!\n");
            break;

        default:
            printf("Reprovado!\n");
    }



   return 0;

 }
