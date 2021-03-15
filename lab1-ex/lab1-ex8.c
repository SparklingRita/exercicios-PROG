#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define gravidade 9.8
#define pi 3.14159265358979323846
/*
Enunciado:
Considere o problema 3 e que o cesto tem um diâmetro c. Escreva um programa que calcule uma gama de valores
de ângulos aceitáveis de forma que o projétil caia dentro do cesto para uma dada distância e velocidade inicial.
Assim, o programa deve ler como parâmetros de entrada a distância d, a velocidade inicial , o diâmetro do
cesto c e imprimir a gama de ângulos (em graus). Utilize um ciclo while e não derive novas equações para
resolver este problema. */

int main()
{
    float d, v, c, angulo, distancia;

    angulo = 0;

    printf("Introduza a distancia d \n");
    scanf("%f", &d);

    printf("Introduza a velocidade inicial\n");
    scanf("%f", &v);

    printf("Introduza o diametro do cesto, c \n");
    scanf("%f", &c);

    printf("Angulos:\n");

    while (angulo < 90)
    {
        distancia = ((v * v) * (sin(2 * ((angulo / 180) * pi)))) / (gravidade);

        if (distancia > d - (c / 2) && distancia < d + (c / 2))
        {
            printf("%.0f\n", angulo);
        }

        angulo++;
    }

    return 0;
}
