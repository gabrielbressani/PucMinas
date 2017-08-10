#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int podeContinuar = 1;

    do
    {
        char caractereDigitado;
        scanf("%c", &caractereDigitado);

        if(caractereDigitado == 115 || caractereDigitado == 83)
            podeContinuar = 0;

    }while(podeContinuar == 1);

    int operacao;

    printf("Informe a operacao desejada: ");

    printf("\nDigite 1 para Area do Retangulo");
    printf("\nDigite 2 para Area do Triangulo");
    printf("\nDigite 3 para Area do Circulo");
    printf("\nDigite 4 para Area do Trapezio\n");

    srand((unsigned)time(NULL));
    operacao = rand() % 4 + 1;
    printf("\n%d\n", operacao);

    switch(operacao)
    {
        case 1:
            AreaDoRetangulo();
            break;
        case 2:
            AreaDoTriangulo();
            break;
        case 3:
            AreaDoCirculo();
            break;
        case 4:
            AreaDoTrapezio();
            break;
        default:
            printf("\nOperacao invalida!");
    }

    return 0;
}

void AreaDoRetangulo()
{
    double base;
    double altura;

    printf("Digite o valor da base: ");
    scanf("%lf", &base);

    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    printf("O valor da area do retangulo e: %.2lf", base * altura);
}

void AreaDoTriangulo()
{
    double base;
    double altura;

    printf("Digiteo o valor da base: ");
    scanf("%lf", &base);

    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    printf("O valor da area do triangulo e: %.2lf", (base * altura) /2);
}

void AreaDoCirculo()
{
    double raio;
    double pi = 3.14;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    printf("O valor da area do circulo e: %.2lf",  pi * pow(raio, 2));
}

void AreaDoTrapezio()
{
    double baseMenor;
    double baseMaior;
    double altura;

    printf("Digite o valor da base maior: ");
    scanf("%lf", &baseMaior);

    printf("Digite o valor da base menor: ");
    scanf("%lf", &baseMenor);

    printf("Digite valor da altura: ");
    scanf("%lf", &altura);

    printf("O valor da area do triangulo e: %.2lf", ((baseMaior +  baseMenor) * altura) /2);
}
