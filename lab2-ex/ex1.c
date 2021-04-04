#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Ex 1 - Tabuada*/

int main()
{
    srand(time(NULL));
    int num1, num2, resultado, solucao;

    while (resultado != 0)
    {
        num1 = (rand() % 9) + 1;
        num2 = (rand() % 9) + 1;

        printf("%d x %d\n", num1, num2);
        scanf("%d", &resultado);

        solucao = num1 * num2;

        if (resultado == solucao)
        {
            printf("Acertou\n");
        }
        while (resultado != solucao && resultado != 0)
        {
            printf("Estudasses\n");
            scanf("%d", &resultado);
        }
    }
}
