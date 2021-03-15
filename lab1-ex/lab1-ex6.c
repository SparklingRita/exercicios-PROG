#include <stdio.h>
#include <stdlib.h>

/*
Enunciado:
Escreva um programa para ler o número de um mês e que imprima de seguida o número de dias para este mês.
Utilize o switch/case. 
*/

int main()
{
    int num;

    printf("Insira o número do mês: \n");
    scanf("%d", &num);

    if (num <= 12 && num >= 1)
    {
        switch (num)
        {
        case 1:
            printf("31 dias");
            break;
        case 2:
            printf("29 dias");
            break;
        case 3:
            printf("31 dias");
            break;
        case 4:
            printf("30 dias");
            break;
        case 5:
            printf("31 dias");
            break;
        case 6:
            printf("30 dias");
            break;
        case 7:
            printf("31 dias");
            break;
        case 8:
            printf("31 dias");
            break;
        case 9:
            printf("30 dias");
            break;
        case 10:
            printf("31 dias");
            break;
        case 11:
            printf("30 dias");
            break;
        case 12:
            printf("31 dias");
            break;
        }
    }
    return 0;
}
