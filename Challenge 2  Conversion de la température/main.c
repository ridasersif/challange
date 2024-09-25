#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
    float C;
    printf("veuillez enter la temperature en celsius\n");
    printf("C=");
    scanf("%f",&C);

    if (C<0)
    {
        printf("C=%.1f Celsius",C);
        printf(" donc l'état de l'eau ets solid");
    }
     else if(0<=C<100)
    {
        printf("C=%.1f Celsius",C);
        printf(" donc l'état de l'eau ets liquide");
    }
     else
    {
        printf("C=%.1f Celsius",C);
        printf(" donc l'état de l'eau ets gaz");
    }





    return 0;
}
