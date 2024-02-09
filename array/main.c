#include <stdio.h>

void main(void)
{
   int a[5];
   int pos;
   int total = 0;

   a[0] = 100;
   a[1] = 50;
   a[2] = 25;
   a[3] = 0;
   a[4] = 0;

   for(int i = 0; i<5; i++)
   {
       if(a[i] != 0)
       {
           printf("\n Valor linea %d: %d",i,a[i]);
           total += a[i];
       }
   }

   printf("\n Total = %d",total);

   return 0;
}
