#include <stdio.h>
#include <stdlib.h>

int main()
{
float PRECIO, NPR;

    printf("Ingrese el precio del producto: ");

    scanf("%f", &PRECIO);

if (PRECIO< 1500)

    NPR = PRECIO * 1.11;

else

    NPR = PRECIO * 1.08;

    printf("\nNuevo precio del producto: %8.2f", NPR);
}
