#include <stdio.h>
#include <stdlib.h>

/*
Enunciado:
Escreva um programa para ler, separadamente, três caracteres correspondentes a dígitos decimais (algarismos)
e escreva o dobro do número inteiro cujos algarismos são os caracteres lidos. 
*/

int main()
{
    int num1, num2, num3, num;
    int i;
    printf("Insira 3 algarismos\n");

    scanf("%d %d %d", &num1, &num2, &num3);

    num = (num1 * 100) + (num2 * 10) + (num3);

    printf("O dobro do numero %d e %d", num, num * 2);
    return 0;
}
