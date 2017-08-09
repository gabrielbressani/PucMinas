#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 4

int main()
{
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];

    printf("Matriz A ----\n\n");
    PreencherMatriz(matrizA);

    printf("\n\nMatriz B ----\n\n");
    PreencherMatriz(matrizB);

    SomarMatrizes(matrizA, matrizB);
}

void PreencherMatriz(int matriz[LINHAS][COLUNAS])
{
    int linha,
        coluna;

    for(linha = 0; linha < LINHAS ; linha++)
    {
        for(coluna = 0; coluna < COLUNAS; coluna++)
        {
            printf("Informe o valor em [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}

void SomarMatrizes(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS])
{
    printf("\n\n A soma A+B gerou a seguinte matriz: \n\n");

    int linha,
        soma,
        coluna;

    for(linha = 0; linha < LINHAS ; linha++)
    {
        for(coluna = 0; coluna < COLUNAS; coluna++)
        {
            soma = matrizA[linha][coluna] + matrizB[linha][coluna];
            printf(" %d ", soma);
        }
        printf("\n");
    }
}
