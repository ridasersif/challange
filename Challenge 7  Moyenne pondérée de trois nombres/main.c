#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float N1,N2,N3, moyenne;
    printf("veuillez enter 3 nombres\n ");
    printf("N1=");
    scanf("%f",&N1);
    printf("\nN2=");
    scanf("%f",&N2);
    printf("\nN3=");
    scanf("\n%f",&N3);
    moyenne=pow((N1*N2*N3),1.0/3.0);
    printf(" moyenne_geometrique=%f",moyenne);

    return 0;
}
