#include <stdio.h>

int main()
{   // definicion de variables los mas basico
    char coche[100];
    double consumo, costo, kmgalon, viaje;

    //primer printf con nombre me refiero al modelo
    printf("Introduce el nombre del coche: ");
    scanf("%s", coche);

    //segundo printf bastante explicativo
    printf("Introduce el consumo de combustible por kilometro (en litros): ");
    scanf("%lf", &consumo);

    // tercer printf bastante explicativo tambien
    printf("Introduce el costo del combustible por litro: ");
    scanf("%lf", &costo);

    // aqui dividimos para poder convertir a galones
    kmgalon = 1 / (consumo / 3.78541);

    printf("Introduce la distancia del viaje (en kilometros): ");
    scanf("%lf", &viaje);

    double costo_viaje = (viaje / kmgalon) * costo;

    // aqui se guardaran los datos en un archivo de texto
    FILE *archivo;
    archivo = fopen("datos.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo.");
        return 1;
    }

    // aqui usamos la funcion fprintf para escribir datos
    fprintf(archivo, "Detalles del viaje para el coche %s:\n", coche);
    fprintf(archivo, "Consumo de combustible: %.2lf litros/km\n", consumo);
    fprintf(archivo, "Consumo en km/galon: %.2lf km/galon\n", kmgalon);
    fprintf(archivo, "Costo del viaje: $%.2lf\n", costo_viaje);

    // se usa para cerrar un archivo que se abrio recienteme
    fclose(archivo);

    printf("\nLos detalles del viaje se han guardado en el archivo 'datos.txt'.\n");

    return 0;
}
