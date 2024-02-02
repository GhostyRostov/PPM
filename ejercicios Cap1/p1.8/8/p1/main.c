#include <stdio.h>
#include <math.h>

int main()
{
    float RADIO, ALTURA, VOLUMEN, AREA;

    printf("Ingrese el radio y la altura del cilindro: ");

    scanf("%f %f", &RADIO, &ALTURA);

    VOLUMEN = M_PI * pow (RADIO, 2) * ALTURA;

    AREA = 2 * M_PI * RADIO * ALTURA;

    printf("\nEl volumen es: %6.2f \t El area es: %6.2f", VOLUMEN, AREA);
}
