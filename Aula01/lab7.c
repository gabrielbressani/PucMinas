#include <stdio.h>

int main()
{
    int limiteInferior;
    int limiteSuperior;
    int i;

    printf("Digite um limite inferior: ");
    scanf("%d", &limiteInferior);

    printf("\nDigite um limite superior: ");
    scanf("%d", &limiteSuperior);

    printf("\nOs numeros pares entre %d e %d sao:\n", limiteInferior, limiteSuperior);

    for(i = limiteInferior; i <= limiteSuperior; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    return 0;
}