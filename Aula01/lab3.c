#include <stdio.h>
#include <math.h>

int main()
{
    double primeiroNumero;
    double segundoNumero;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%lf", &segundoNumero);

    if (primeiroNumero > segundoNumero)
        printf("O maior numero informado foi: %.2lf\n", primeiroNumero);
    else   
        printf("O maior numero informado foi: %.2lf\n", segundoNumero);
        
    return 0;
}

