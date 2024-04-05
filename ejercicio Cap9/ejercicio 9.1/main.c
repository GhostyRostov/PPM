#include <stdio.h>

void main(void)
{
    char p1;

    FILE *ar;

    char Om[60]= "arc.txt";
    printf(" \n Ingrese el archivo es:");
    gets(Om);

    ar = fopen(Om, "w");

    if (ar != NULL)
    {
        while ((p1 = getchar()) != '\n')
            fputc(p1, ar);
        fclose(ar);
        printf("\n Ingrese el texto:");
        scanf("%s",&p1);
    }
    else

        printf("No se puede abrir el archivo\n");
}

