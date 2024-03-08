#include <stdio.h>

// lo normal en cualquier programa definir las variables utilizadas
int MATRICES[3][3];
int DIAGONAL[3];
int C, F;

int main()
{
    // Aqui se ingresaran los datos para crear la matriz
    printf("Ingrese los valores de la matriz 3x3:\n");
    for (C = 0; C < 3; C++)
    {
        for (F = 0; F < 3; F++)
        {
            printf("Ingrese el valor para la posicio112n [%d][%d]: ", C, F);
            scanf("%d", &MATRICES[C][F]);
        }
    }

    // Aqui se mostrara la matriz que creo el usuario
    printf("\nESTA ES LA MATRIZ QUE ACABAS DE CREAR:\n");
    for (C = 0; C < 3; C++)
    {
        for (F = 0; F < 3; F++)
        {
            printf("%d\t", MATRICES[C][F]);
        }
        printf("\n");
    }

    // visualizacion de los valores que se encuentran en la diagonal principal, si aparece otro valor estara incorrecto
    printf("\nESTA ES LA DIAGONAL PRINCIPAL:\n");
    for (C = 0; C < 3; C++)
    {
        DIAGONAL[C] = MATRICES[C][C];
        printf("%d\t", DIAGONAL[C]);
    }
    printf("\n");

    return 0;
}

