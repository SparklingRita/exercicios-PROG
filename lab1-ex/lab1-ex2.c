#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia dois tempos, cada um especificado em horas (0-23), minutos (0-59) e (0-59)
//segundos; sendo o primeiro tempo maior do que o segundo, determine a diferença entre eles e escreve-a, também,
//em horas, minutos e segundos.

int main()
{
    int h1, h2, m1, m2, s1, s2, tempo1, tempo2, diferenca, horas, min, seg;

    printf("Insira o primeiro tempo ordenadamente (horas, minutos, segundos)");
    scanf("%d%d%d", &h1, &m1, &s1);

    printf("Insira o segundo tempo ordenadamente (horas, minutos, segundos)");
    scanf("%d%d%d", &h2, &m2, &s2);

    tempo1 = (h1 * 3600) + (m1 * 60) + s1; //passar para segundos
    tempo2 = (h2 * 3600) + (m2 * 60) + s2;

    diferenca = tempo1 - tempo2;

    horas = diferenca / 3600;
    min = (diferenca % 3600) / 60;
    seg = (diferenca % 3600) % 60;

    printf("Diferenca entre os tempos: %02d:%02d:%02d\n", horas, min, seg);

    return 0;
}
