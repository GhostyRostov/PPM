#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cambia(FILE *, FILE *);
int main(void)
{
    FILE *ar;
    FILE *ap;
    ar = fopen("arc.txt", "r");
    ap = fopen("arc1.txt", "w");
    if (ar != NULL && ap != NULL)
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
    }
    else
        printf("No se pueden abrir los archivos");
}

void cambia(FILE *ap1, FILE *ap2)

{
    char cad1[100], *cad2;
    while(fgets(cad1, 100, ap1) != NULL)
    {
        cad2 = strstr(cad1, "mexico");
        while(cad2 != NULL)
        {
            cad2[0] = 'M';
            cad2 = strstr(cad2 + 1, "mexico");
        }
        fputs(cad1, ap2);
    }
}
