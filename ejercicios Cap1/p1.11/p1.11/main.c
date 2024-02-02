#include <stdio.h>
#include <math.h>

int main()
{
    float X1,Y1,X2,Y2,X3,Y3,LADO1,LADO2,LADO3,PERIMETRO;

    printf("Ingrese la coordenada del punto P1:");

    scanf("%f %f", &X1, &Y1 );

    printf("Ingrese la coordenada del punto P2:");

    scanf("%f %f", &X2, &Y2 );

    printf("Ingrese la coordenada del punto P3:");

    scanf("%f %f", &X3, &Y3 );

    LADO1 = sqrt(pow(X1-X2, 2) + pow(Y1-Y2, 2));

    LADO2 = sqrt(pow(X2-X3, 2) + pow(Y2-Y3, 2));

    LADO3 = sqrt(pow(X1-X3, 2) + pow(Y1-Y3, 2));

    PERIMETRO = LADO1 + LADO2 + LADO3;

    printf("\nEl perimetro del triangulo es: %6.3f", PERIMETRO);

}
