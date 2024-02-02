#include <stdio.h>

void main(void)
{
    int CODIGO;
    float SUELDO1, SUELDO2, SUELDO3, SUELDO4, SUELDO5, SUELDO6, INGRESO, PROMEDIO;

    printf("INGRESE EL CODIGO:");
    scanf("%d",&CODIGO);

    printf("INGRESE LOS 6 SUELDOS: \n");
    scanf("%f %f %f %f %f %f", &SUELDO1, &SUELDO2, &SUELDO3, &SUELDO4, &SUELDO5, &SUELDO6);

    INGRESO = SUELDO1 + SUELDO2 + SUELDO3 + SUELDO4 + SUELDO5 + SUELDO6;

    PROMEDIO = INGRESO / 6;

    printf("\n %d %5.2f %5.2f",CODIGO, INGRESO, PROMEDIO);

    return 0;
}
