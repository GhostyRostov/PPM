#include <stdio.h>
#include <stdlib.h>

int main()
{
   float SALARIO;
    int NIVEL;
    printf("Ingrese el nivel academico del profesor: ");
    scanf("%d", &NIVEL);
    printf("Ingrese el salario: ");
    scanf("%f", &SALARIO);
    switch(NIVEL)
    printf("ingrese el salario: ");
    scanf("%f", &SALARIO);
    switch(NIVEL)
    {
    case 1: SALARIO = SALARIO * 1.0035; break;
    case 2: SALARIO = SALARIO * 1.0041; break;
    case 3: SALARIO = SALARIO * 1.0048; break;
    case 4: SALARIO = SALARIO * 1.0053; break;
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIVEL, SALARIO);
}
