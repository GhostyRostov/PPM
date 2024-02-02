#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TRATAMIENTO, EDAD, DIA;
    float COSTO;

    printf("Ingrese tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &TRATAMIENTO, &EDAD, &DIA);

    switch (TRATAMIENTO)
    {
    case 1:
        COSTO = DIA * 2800;
        break;
    case 2:
        COSTO = DIA * 1950;
        break;
    case 3:
        COSTO = DIA * 2500;
        break;
    case 4:
        COSTO = DIA * 1150;
        break;
    default:
        COSTO = -1;
        break;
    }

    if (COSTO != -1)
    {
        if (EDAD >= 60)
            COSTO = COSTO * 0.75;
        else if (EDAD <= 25)
            COSTO = COSTO * 0.85;

        printf("\nClave tratamiento: %d\t DIas: %d\t Costo total: %8.2f", TRATAMIENTO, DIA, COSTO);
    }
    else
    {
        printf("\nLa clave del tratamiento es incorrecta");
    }

    return 0;
}


