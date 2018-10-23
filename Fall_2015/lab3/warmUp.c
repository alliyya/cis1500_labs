/*  Author: Alliyya Mo
    Description: This program will ask the user 3 questions
    and take in their input and then output the results

*/
#include <stdio.h>

int main(void)
{
    int age;
    char letter;
    float pie;

    age = 0;
    letter = '0';
    pie = 0.00;

    printf("What is your favourite letter?\n");
    scanf("%c",&letter);

    printf("How old are you?\n");
    scanf("%d",&age);

    printf("What are the first 3 digits of PI?\n");
    scanf("%f",&pie);

    // printf("Age:%d\nFavourite Letter:%c\nPI:%f\n",age,letter,pie);

    printf("Age:%d\n",age);
    printf("Favourite Letter:%c\n",letter);
    printf("PI:%f\n",pie);

    return 0;
}