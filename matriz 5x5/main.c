#include <stdio.h>

#define N 5

void calcularDiagonales(int matriz[N][N])
{
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;

    printf("La diagonal principal de la matriz es: ");
    for (int i = 0; i < N; i++)

    {
        printf("%d ", matriz[i][i]);
        sumaDiagonalPrincipal += matriz[i][i];
    }

    printf("\n");
    printf("Suma de la diagonal principal: %d\n", sumaDiagonalPrincipal);

    printf("La diagonal secundaria de la matriz es: ");
    for (int i = 0; i < N; i++)

    {
        printf("%d ", matriz[i][N - 1 - i]);
        sumaDiagonalSecundaria += matriz[i][N - 1 - i];
    }

    printf("\n");
    printf("Suma de la diagonal secundaria: %d\n", sumaDiagonalSecundaria);
}

int main()
{
    int matriz[N][N] =
       {{1, 2, 3, 6, 7},
        {4, 5, 6, 7, 8},
        {6, 5, 8, 9, 9},
        {7, 8, 9, 4, 2},
        {1, 4, 8, 3, 1}
    };

    calcularDiagonales(matriz);
    return 0;
}
