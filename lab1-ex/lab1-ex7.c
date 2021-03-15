#include <stdio.h>
#include <stdlib.h>

/*
Enunciado:
Escreva um programa para ler um número real positivo e que realize o arredondamento para a n-ésima casa
decimal, com n introduzido pelo utilizador (n assume valores entre 1 e 7). Realize o programa sem recurso às
funções de biblioteca do C e utilize o printf para produzir o mesmo valor.
Exemplo: para os valores de 2.163, 0.547 e 0.997, e supondo que se especifica n = 2, o programa deve imprimir,
respetivamente 2.16, 0.55 e 1.00. */

int main()
{
    float num;
    int n = 0;

    printf("Insira um numero real\n");
    scanf("%f", &num);

    while (n < 1 || n > 7)
    {
        printf("Insira a n-esima casa decimal (apenas entre 1 e 7) \n");
        scanf("%d", &n);
    }

    printf("Resultado: %.*f", n, num);
    return 0;
}
