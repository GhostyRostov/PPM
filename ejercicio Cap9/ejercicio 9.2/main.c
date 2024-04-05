#include <stdio.h>

void main(void)
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL)

    {
        while ((p1 = fgetc(ar)) != EOF)
        {
            p1 = fgetc(ar);
            putchar(p1);

        }

        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }
}

