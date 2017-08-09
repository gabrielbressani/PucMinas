#include <stdio.h>

int main()
{
    int primeiroNumero;
    int segundoNumero;
    int soma = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    soma = primeiroNumero + segundoNumero;

    printf("A soma é %d\n", soma);
    return 0;
}
