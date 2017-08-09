#include <stdio.h>
#include <math.h>

int main()
{
    int logaritmando = 0;
    int baseDoLogaritmo = 0;
    double logaritmo  = 0.0;
    
    printf("\nDigite o logaritmando: ");
    scanf("%d", &logaritmando);

    printf("\nDigite a base do logaritmo: ");
    scanf("%d", &baseDoLogaritmo);
    
    logaritmo = log(logaritmando) / log(baseDoLogaritmo);
    
    printf("\n O log de %d na base %d é: %.2lf", logaritmando, baseDoLogaritmo, logaritmo);
    
    return 0;
}
