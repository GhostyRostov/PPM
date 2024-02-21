#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE 10

int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;

int main(int argc, char* argv[])

{
    seed = 0;

    // generada numeros aleatorios

    srand(time(&seed));


    n = sizeof(a) / sizeof(*a);

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 1000;
    }

    for (i = 0; i < n; i++)
    {
        printf("Element a[%d]: %d\n", i, a[i]);
    }

    // aqui inicia el proceso de ordenación
    change = 1;

    // este while es para ordenar

    while (change == 1)

    {
        // en chage se reinicia a cero al reiniciarse el bucle

        change = 0;

        // aqui se compararan e intercambian elementos

        for (i = 0; i < n - 1; i++)
        {
            // Si el elemennto actual es mayor que el siguiente este intercambia de lugar

            if (a[i] > a[i+1])
            {
                buf = a[i];
                a[i] = a[i+1];
                a[i+1] = buf;

                // cuando el ghange vuelve a 1 indica que se ha realizado un cambio
                change = 1;
            }
        }
    }


    printf("\n----------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Element a[%d]: %d\n", i, a[i]);
    }

    return 0;
}
