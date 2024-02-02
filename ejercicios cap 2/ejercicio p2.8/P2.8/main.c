#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int MATRICULA, CARRERA, SEMESTRE;
    float PROMEDIO;

    printf("Ingrese matricula: ");
    scanf("%d", &MATRICULA);

    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica): ");
    scanf("%d", &CARRERA);

    printf("Ingrese semestre: ");
    scanf("%d", &SEMESTRE);

    printf("Ingrese promedio: ");
    scanf("%f", &PROMEDIO);

    switch (CARRERA)
    {
    case 1:
        if (SEMESTRE >= 6 && PROMEDIO >= 8.5)
            printf("\n%d %d %5.2f", MATRICULA, CARRERA, PROMEDIO);
        break;
    case 2:
        if (SEMESTRE >= 5 && PROMEDIO >= 9.0)
            printf("\n%d %d %5.2f", MATRICULA, CARRERA, PROMEDIO);
        break;
    case 3:
        if (SEMESTRE >= 6 && PROMEDIO >= 8.8)
            printf("\n%d %d %5.2f", MATRICULA, CARRERA, PROMEDIO);
        break;
    case 4:
        if (SEMESTRE >= 7 && PROMEDIO >= 9.0)
            printf("\n%d %d %5.2f", MATRICULA, CARRERA, PROMEDIO);
        break;
    default:
        printf("\nError en la carrera");
        break;
    }

    return 0;
}
