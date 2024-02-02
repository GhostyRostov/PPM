#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CLAVE, CATEGORIA, ANTIGUEDAD, RES;

    printf("\nIngrese la clave, categoria y antiguedad del trabajador:");
    scanf("%d %d %d", &CLAVE, &CATEGORIA, &ANTIGUEDAD);

    switch (CATEGORIA)
    {
    case 3:
    case 4:
        if (ANTIGUEDAD >= 5)
            RES = 1;
        else
            RES = 0;
        break;
    case 2:
        if (ANTIGUEDAD >= 7)
            RES = 1;
        else
            RES = 0;
        break;
    default:
        RES = 0;
        break;
    }

    if (RES)
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLAVE);
    else
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", CLAVE);

    return 0;
}
