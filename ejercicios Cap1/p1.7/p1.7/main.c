#include <stdio.h>

int main(void)

{
float PIE, LIBRAS, METROS, KILOMETROS;

printf("Ingrese los datos del objeto: ");

scanf("%f %f", &PIE, &LIBRAS);

METROS = PIE * 0.09290;

KILOMETROS = LIBRAS * 0.45359;

printf("\nDatos del objeto \nLongitud: %5.2f \t Peso: %5.2f", METROS, KILOMETROS);
}
