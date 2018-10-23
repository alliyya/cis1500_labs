#include <stdio.h>
#include <math.h>
int main(void)
{
    double sideA;
    double sideB;
    double sideC;

    sideA = 0.00;
    sideB = 0.00;
    sideC = 0.00;

    printf("Enter the side length of Side A:\n");
    scanf("%lf",&sideA);

    printf("Enter the side length of Side B\n");
    scanf("%lf",&sideB);

    sideC = sqrt((sideA*sideA)+(sideB*sideB));

    //Formats the velocity to 2 decimal places
    printf("The velocity is %.2lf\n", velocity);

    return 0;
}
