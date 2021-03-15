#include <stdio.h>
#include <stdlib.h>

/*Enunciado:
Desenvolva um programa que lê do teclado um número natural e imprime todos os divisores
desse número e o respectivo valor médio com três casas decimais.*/


int main()
{
    int num;
    int divisor;
    int soma;
    int i;
    float media;
   // int i;
    printf("Insira um número: \n");
    scanf("%d", &num);
    divisor=1;
    soma=0;
    i=0;
    printf("divisores: ");

    for(divisor=1; num>=divisor; divisor++) {
        if (num % divisor == 0)
    {
            printf("%d ",divisor);
            soma=soma+divisor;
            i++;
    }
    }
    media = (float) soma / i;
    printf("média: %.2lf" , media);

    return 0;
}
