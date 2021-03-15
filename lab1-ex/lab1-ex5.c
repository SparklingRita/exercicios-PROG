#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define radioWaves 3 * pow(10, 9)
#define microwaves 3 * pow(10, 12)
#define infrared 4.3 * pow(10, 14)
#define visible 7.5 * pow(10, 14)
#define ultraviolet 3 * pow(10, 17)
#define xray 3 * pow(10, 19)
#define gamma 3 * pow(10, 19)

/*
Enunciado:
Radiação eletromagnética pode ser classificada em uma de sete categorias de acordo com a sua frequência, tal
como indicado na tabela em baixo. Escreva um programa que recebe a frequência e imprime o nome da classe
correspondente. Use a directiva #define.
*/

int main()
{
    double frequencia;
    printf("Insira a frequência: \n");
    scanf("%lf", &frequencia);

    if (frequencia < radioWaves)
    {
        printf("Corresponde a ondas de radio");
    }

    else if (frequencia >= radioWaves && frequencia < microwaves)
    {
        printf("Corresponde a micro-ondas");
    }

    else if (frequencia >= microwaves && frequencia < infrared)
    {
        printf("Corresponde a luz infravermelha");
    }

    else if (frequencia >= infrared && frequencia < visible)
    {
        printf("Corresponde a luz visivel");
    }

    else if (frequencia >= visible && frequencia < ultraviolet)
    {
        printf("Corresponde a luz ultravioleta");
    }

    else if (frequencia >= ultraviolet && frequencia < xray)
    {
        printf("Corresponde a raio x");
    }

    else if (frequencia >= xray)
    {
        printf("Corresponde a radiaçao gama");
    }
    return 0;
}
