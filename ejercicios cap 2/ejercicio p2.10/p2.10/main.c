#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUMEROS;

    printf("Ingrese el numero:");

    scanf("%d", &NUMEROS);

    if (NUMEROS == 0)

    printf("\nNulo");

    else

    if (pow (-1, NUMEROS) > 0)

    printf("\nPar");

    else

    printf("\nImpar");
}
