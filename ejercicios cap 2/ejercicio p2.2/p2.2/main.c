#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PRECIO, NPR;

    printf("ingrese el precio del producto: ");

    scanf("%f", &PRECIO);

    if (PRECIO > 1500)
    {
    NPR = PRECIO * 1.11;

    printf("\nNuevo precio: %7.2f",NPR);
    }
}
