#include <stdio.h>
#include <string.h>

struct alumno
{

    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

void main(void)
{
    struct alumno a1 = {120, "Maria", "Contabilidad", 8.9, "Queretaro"}, a2, a3;

    char nom[20],car[20],dir[20];
    int mat;
    float pro;

    printf("\n Ingrese el nombre del alumno 2:");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("\n Ingrese la carrera del alumno 2:");
    gets(a2.carrera);
    printf("\n Ingrese el promedio del alumno 2:");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("\n Ingrese la direccion del alumno 2:");
    gets(a2.direccion);

    printf("\n Ingrese la matricula del alumno 2:");
    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);
    printf("\n Ingrese el nombre del alumno 3:");
    gets(nom);
    strcpy(a3.nombre,nom);
    printf("\n Ingrese la carrera del alumno 3:");
    gets(car);
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);
    printf("\n Ingrese la direccion del alumno 3:");
    gets(dir);
    strcpy(a3.direccion, dir);

    printf("\nDatos del alumno 1");
    printf("%d \n",a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n",a1.promedio);
    puts(a1.direccion);

    printf("\nDatos del alumno 2");
    printf("%d \n",a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n",a2.promedio);
    puts(a2.direccion);

    printf("\n Datos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);
}
