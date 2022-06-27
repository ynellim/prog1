#include <stdio.h>
#include <stdlib.h>


int main()
{
    char np1[20], np2[20],np3[20],np4[20], np5[20];
    int sp1, sp2, sp3, sp4, sp5;
    int chute;
    int acertou1=0, acertou2=0;

    // premio 1
    printf("Qual o nome do premio 1?");
    scanf("%s", n_p1);
    printf("Qual a senha do premio 1?");
    scanf("%d", &s_p1);

    //premio 2
    printf("Qual o nome do premio 2?");
    scanf("%s", n_p2);
    printf("Qual a senha do premio 2?");
    scanf("%d", &s_p2);
    
    //premio 3
    printf("Qual o nome do premio 3?");
    scanf("%s", n_p2);
    printf("Qual a senha do premio 3?");
    scanf("%d", &s_p2);
    
    //premio 4
    printf("Qual o nome do premio 4?");
    scanf("%s", n_p2);
    printf("Qual a senha do premio 4?");
    scanf("%d", &s_p2);
    
    //premio 5
    printf("Qual o nome do premio 5?");
    scanf("%s", n_p2);
    printf("Qual a senha do premio 5?");
    scanf("%d", &s_p2);

    while (acertou1==0 && acertou2==0)
    {
        printf("Qual o número que vc chuta?");
        scanf("%d", &chute);
        switch(chute)
        {
            case 7:
                acertou1 = 1;
                printf("Você acertou o prêmio %s, senha %d\n", np1, sp1);
                break;
            case 43:
                acertou2 = 1;
                printf("Você acertou o prêmio %s, senha %d\n", np2, sp2);
                break;
            case 56:
                acertou2 = 1;
                printf("Você acertou o prêmio %s, senha %d\n", np3, sp3);
                break;
            case 87:
                acertou2 = 1;
                printf("Você acertou o prêmio %s, senha %d\n", np4, sp4);
                break;
             case 92:
                acertou2 = 1;
                printf("Você acertou o prêmio %s, senha %d\n", np5, sp5);
                break;         
                     
            default:
                printf("Você errou!!\n");
        }
    }
}
