#include <stdio.h>
#include <stdlib.h>

int main()
{
   float ECA;
    printf("Ingrese la extensión de la estancia: ");

    scanf("%f", &ECA);

    ECA = ECA * 4047 / 10000;

    printf("\nExtension de la estancia en hectareas: %5.2f", ECA);
}
