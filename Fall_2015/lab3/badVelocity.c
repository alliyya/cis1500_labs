#include <stdio.h>
int main(void){
    double distance=0,time=0,velocity=0;
    printf("Enter the distance(meters) travelled:\n");
    scanf("%lf",&distance);
    printf("Enter the time(seconds):\n");
    scanf("%lf",&time);
    velocity = distance/time;
    printf("The velocity is %lf\n", velocity);
    return 0;}