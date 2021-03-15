#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define gravidade 9.8
#define pi 3.14159265358979323846

/*
Enunciado:
 Os projéteis seguem uma trajetória parabólica no ar devido à aceleração da gravidade. Considere a equação em
baixo que descreve a relação entre o ângulo de partida, velocidade inicial  e distância d, onde g = 9.8 
De forma a que o projétil não bata no teto também é necessário verificar que a altura não excede um valor
especificado pelo utilizador. Assuma que o projétil é enviado do chão (altura = 0). Escreva um programa que
recebe como parâmetros o ângulo de partida em graus, velocidade inicial  e altura do teto, indica a que
distância deve estar o centro do cesto e imprime uma mensagem a indicar se o projétil bate ou não no teto. Note
que a função sin do C recebe o ângulo em radianos.
*/

int main()
{
    float altura, velocidade, graus, radianos, distancia, teto;
    teto = 0;
    distancia = 0;

    printf("Insira a altura do teto \n");
    scanf("%f", &altura);
    printf("Insira a velocidade \n");
    scanf("%f", &velocidade);
    printf("Qual o ângulo de partida? \n");
    scanf("%f", &graus);

    radianos = (graus / 180) * pi;

    distancia = ((velocidade * velocidade) * (sin(2 * radianos))) / (gravidade);

    teto = ((velocidade * velocidade) * ((sin(radianos)) * (sin(radianos))) / (2 * gravidade));

    if (teto >= altura)
    {
        printf("O projetil bate no teto \n");
    }

    else
    {
        printf("O projetil nao bate no teto \n");
        printf("A distancia e de %.3lf metros", distancia);
    }

    return 0;
}
