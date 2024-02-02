#include <stdio.h>
#include <stdlib.h>

int main()
{
    int DISTANCIA, TIEMPO;

    float BILLETE;

    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");

    scanf("%d %d", &DISTANCIA, &TIEMPO);

    if ((DISTANCIA*2 > 500) && (TIEMPO > 10))

    BILLETE = DISTANCIA * 2 * 0.19 * 0.8;

    else

    BILLETE = DISTANCIA * 2 * 0.19;

    printf("\n\nCosto del billete: %7.2f", BILLETE);
}
