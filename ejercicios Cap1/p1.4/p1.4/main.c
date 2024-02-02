#include <stdio.h>

int main(void)
{
    float BASE, ALTURA, SUPERFICIE;

    printf("Ingrese la base y la altura del triangulo: ");
    scanf("%f %f", &BASE, &ALTURA);

    SUPERFICIE = BASE * ALTURA / 2;

    printf("\nLa superficie del triangulo es: %5.2f", SUPERFICIE);

    return 0;
}

