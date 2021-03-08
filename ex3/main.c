#include <stdio.h>
#include <stdlib.h>

/*
Enunciado:
Desenvolva um programa que imprime um triângulo formado pelo carácter *, como
ilustrado na figura abaixo. O programa deve começar por ler do teclado a altura do triângulo
(medida em termos do número de colunas).*/


int main()
{
    int altura;
    int i;

    printf("Insira a altura do triangulo: \n");
    scanf("%d", &altura);

    for (i=0 ; i<=altura ; i++) {
            printf("* ");

        }

    return 0;
}
