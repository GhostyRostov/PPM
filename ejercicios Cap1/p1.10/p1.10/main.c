#include <stdio.h>
#include <math.h>

int main()
{
   float LADO1, LADO2, LADO3, AUX, AREA;

    printf("Ingrese los lados del triangulo: ");

    scanf("%f %f %f", &LADO1, &LADO2, &LADO3);

    AUX = (LADO1 + LADO2 + LADO3) / 2;

    AREA = sqrt (AUX * (AUX-LADO1) * (AUX-LADO2) * (AUX - LADO3));

    printf("\nEl area del triangulo es: %6.2f", AREA);

}
