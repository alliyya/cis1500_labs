#include <stdio.h>

int main(void)
{
    double distance;
    double time;
    double velocity;

    distance = 0.00;
    time = 0.00;
    velocity = 0.00;

    printf("Enter the distance(meters) travelled:\n");
    scanf("%lf",&distance);

    printf("Enter the time(seconds):\n");
    scanf("%lf",&time);

    velocity = distance/time;

    printf("The velocity is %.2lf\n", velocity);

    return 0;
}