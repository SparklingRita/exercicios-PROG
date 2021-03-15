#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que receba o número de total de segundos como um inteiro e imprima o número total de
//horas, minutos e segundos correspondente. Não utilize quaisquer condições ou ciclos.

int main()
{

    int num,horas,min,seg;
    printf("Insira o número total de segundos: \n");
    scanf("%d", &num);

    horas = num / 3600;
    min = (num % 3600) / 60;
    seg = (num % 3600) % 60;

    printf("%02d:%02d:%02d\n", horas, min, seg);


    return 0;
}
