#include <stdio.h>
#include <stdlib.h>

/*
Enunciado:
Desenvolva um programa que lê do teclado um número inteiro entre 1 e 12, correspondente
a um mês do ano, e imprime o número de dias desse mês (assuma ano bissexto). A leitura
apenas termina quando o utilizador inserir um número que não esteja dentro da gama de
valores admissíveis. Utilize switch e do while para resolver este exercício*/


int main()
{
    int num;

    printf("Insira o número do mês: \n");
    scanf("%d", &num);

    if (num<=12 && num>=1) {
        switch(num) {
        case 1: printf("31 dias");
        break;
        case 2: printf("29 dias");
        break;
        case 3: printf("31 dias");
        break;
        case 4: printf("30 dias");
        break;
        case 5: printf("31 dias");
        break;
        case 6: printf("30 dias");
        break;
        case 7: printf("31 dias");
        break;
        case 8: printf("31 dias");
        break;
        case 9: printf("30 dias");
        break;
        case 10: printf("31 dias");
        break;
        case 11: printf("30 dias");
        break;
        case 12: printf("31 dias");
        break;                         }
    }
    return 0;
}
