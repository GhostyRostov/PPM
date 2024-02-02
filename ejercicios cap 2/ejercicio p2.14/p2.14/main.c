#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int CLAVE, TIEMPO;
    float COSTO;
    printf("Ingresa la clave y el tiempo: ");
    scanf("%d %d", &CLAVE, &TIEMPO);
    switch(CLAVE)
    {
    case 1:
        COSTO = TIEMPO * 0.13 / 60;
        break;
    case 2:
        COSTO = TIEMPO * 0.11 / 60;
        break;
    case 5:
        COSTO = TIEMPO * 0.22 / 60;
        break;
    case 6:
        COSTO = TIEMPO * 0.19 / 60;
        break;
    case 7:
    case 9:
        COSTO = TIEMPO * 0.17 / 60;
        break;
    case 10:
        COSTO = TIEMPO * 0.20 / 60;
        break;
    case 15:
        COSTO = TIEMPO * 0.39 / 60;
        break;
    case 20:
        COSTO = TIEMPO * 0.28 / 60;
        break;
    default :
        COSTO = -1;
        break;
    }
    if (COSTO != -1)
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLAVE, TIEMPO, COSTO);
    else
        printf("\nError en la clave");
}
