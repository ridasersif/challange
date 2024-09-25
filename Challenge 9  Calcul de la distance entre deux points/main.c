#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float x1,y1,z1,x2,y2,z2,AB;
   printf("veuillez enter les coordone de A\n");
   printf("x1=");
   scanf("%f",&x1);
   printf("\ny1=");
   scanf("%f",&y1);
   printf("\nz1=");
   scanf("%f",&z1);
   printf("A(%.0f,%.0f,%.0f)",x1,y1,z1);
   printf("\nveuillez enter les coordone de B\n");
   printf("x2=");
   scanf("%f",&x2);
   printf("\ny2=");
   scanf("%f",&y2);
   printf("\nz2=");
   scanf("%f",&z2);
   printf("B(%.0f,%.0f,%.0f)",x2,y2,z2);
   AB=sqrt((pow(x2-x1,2)+pow(y2-y1,2)+(z2-z1,2)));
   printf("\nAB=%f",AB);
    return 0;
}
