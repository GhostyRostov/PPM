#include <stdio.h>
#include <string.h>

// Definimos una estructura para almacenar los datos del coche
typedef struct
{
    char coche[100];
    float costo_coche;
    double promedio_uso_meses;
    double consumo;
    double costo;
    double kmgalon;
    double viaje;
} Cliente;

// Función para imprimir los detalles del cliente en forma de tabla
void imprimirClienteTabla(Cliente cliente)
{
    printf("| %-20s | %-15.2f | %-20.2lf | %-15.2lf | %-15.2lf | %-15.2lf | %-15.2lf |\n", cliente.coche, cliente.costo_coche, cliente.promedio_uso_meses, cliente.consumo, cliente.costo, cliente.kmgalon, cliente.viaje);
}

// Función para imprimir los detalles del cliente en forma de estructura en un archivo .txt
void imprimirClienteEstructura(FILE *archivo, Cliente cliente)
{
    fprintf(archivo, "--- Ultima actualizacion de datos ---\n\n");
    fprintf(archivo, "Coche: %s\n\n", cliente.coche[0] ? cliente.coche : "Aun no se ha ingresado un modelo");
    fprintf(archivo, "Costo coche: %.2f\n\n", cliente.costo_coche);
    fprintf(archivo, "Promedio Uso Meses: %.2lf\n\n", cliente.promedio_uso_meses);
    fprintf(archivo, "Consumo (L/Km): %.2lf\n\n", cliente.consumo);
    fprintf(archivo, "Costo Combustible: %.2lf\n\n", cliente.costo);
    fprintf(archivo, "Consumo (Km/Galon): %.2lf\n\n", cliente.kmgalon);
    fprintf(archivo, "Viaje (Km): %.2lf\n\n", cliente.viaje);
}

// Función para imprimir la estructura con valores predeterminados
void imprimirEstructuraInicial(Cliente cliente)
{
    printf("---- Estructura con valores predeterminado = 0 ----\n\n");
    printf("Coche: %s\n", cliente.coche[0] ? cliente.coche : "Aun no se ha ingresado un modelo");
    printf("Costo coche: %.2f\n", cliente.costo_coche);
    printf("Promedio Uso Meses: %.2lf\n", cliente.promedio_uso_meses);
    printf("Consumo (L/Km): %.2lf\n", cliente.consumo);
    printf("Costo Combustible: %.2lf\n", cliente.costo);
    printf("Consumo (Km/Galon): %.2lf\n", cliente.kmgalon);
    printf("Viaje (Km): %.2lf\n", cliente.viaje);
}

// Función principal del programa
int main()
{
    // Inicializar la estructura del cliente con valores predeterminados
    Cliente cliente = {"", 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    // Imprimir la estructura inicial del cliente
    imprimirEstructuraInicial(cliente);

    // Variable para almacenar la opción seleccionada por el usuario
    char opcion;

    // Variable para almacenar la cantidad de años
    int anos;

    do
    {
        // con este bucle mostramos el menu y permitir al usuario interactuar con el programa

        printf("\n--- Menu ---\n\n");
        printf("1. Modificar datos del cliente\n");
        printf("2. Ver detalles del cliente\n");
        printf("3. Salir\n\n");
        printf("Seleccione una opcion: ");
        scanf(" %c", &opcion);

        switch(opcion)
        {
        case '1':
            // con esta opcion podemos modificar los datos del cliente

            printf("\nIngrese los nuevos datos del cliente:\n\n");

            printf("Cual es el nombre o modelo del coche: ");
            scanf("%s", cliente.coche);

            printf("Cuenta cuesta el vehiculo: ");
            scanf("%f", &cliente.costo_coche);

            printf("Cual es el promedio de uso en meses: ");
            scanf("%lf", &cliente.promedio_uso_meses);

            printf("Cual el consumo de combustible por kilometro (en litros): ");
            scanf("%lf", &cliente.consumo);

            printf("Cual el costo del combustible por litro: ");
            scanf("%lf", &cliente.costo);

            cliente.kmgalon = 1 / (cliente.consumo / 3.78541);

            printf("Cual distancia del viaje (en kilometros): ");
            scanf("%lf", &cliente.viaje);

            printf("Ingrese la cantidad de anos: ");
            scanf("%d", &anos);

            // aqui se realiza los calculos para multiplicar los valores por la cantidad de anos
            cliente.costo_coche *= anos;
            cliente.promedio_uso_meses *= anos;
            cliente.consumo *= anos;
            cliente.costo *= anos;
            cliente.viaje *= anos;

            printf("\nDatos del cliente modificados con exito.\n");

            // aqui se le pregunta al usuario si desea guardar los datos en un archivo de texto.txt
            printf("\n Desea guardar los datos del coche en un archivo de texto? (s/n): ");
            char respuesta;
            scanf(" %c", &respuesta);

            if (respuesta == 's' || respuesta == 'S')
            {
                /*Si el usuario desea guardar los datos en archivo .txt, se le solicitara
                ingresar un nombre para el archivo y se guardararan los datos en formato estructurado*/

                char nombre_archivo[100];
                printf("Ingrese el nombre del archivo (debe usar la extension .txt): ");
                scanf("%s", nombre_archivo);

                FILE *archivo = fopen(nombre_archivo, "w");
                if (archivo == NULL)
                {
                    printf("No se pudo crear el archivo.\n");
                }
                else
                {
                    // aqui Llamamos a la funcion que escribe en el archivo
                    imprimirClienteEstructura(archivo, cliente);
                    fclose(archivo);
                    printf("Se han registrado los nuevos datos correctamente en '%s'.\n", nombre_archivo);
                }
            }

            break;
        case '2':
            // esta opcion sirve para ver los detalles del cliente
            printf("\nDetalles del cliente:\n");
            printf("| %-20s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s |\n", "Coche", "Costo Vehiculo", "Promedio Uso Meses", "Consumo (L/Km)", "Costo Combustible", "Consumo (Km/Galon)", "Viaje (Km)");
            //aqui imprimimos los detalles del cliente en forma de tabla
            imprimirClienteTabla(cliente);
            break;
        case '3':
            // Opcion para salir del programa

            printf("Saliendo del programa.\n");
            break;
        default:

            // este printf sirve, para cuando se ingrese un parametro no valido

            printf("Opcion no valida. Por favor, seleccione una opcion valida.\n");
        }

    }
    // Continuar el bucle hasta que el usuario seleccione la opcion de salida

    while(opcion != '3');

    return 0;
}

