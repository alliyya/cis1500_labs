#include <stdio.h>
int main(void)
{
    int i;

    i = 0;
    
    printf("For Loop:\n");
    for (int i = 0; i <= 10; ++i)
    {
        printf("%d\n",i);
    }


    i = 0;
    printf("While Loop\n");
    while (i <= 10)
    {
        printf("%d\n",i);

        i++;
    }

    i = 0;
    printf("Do While loop\n");
    do
    {
        printf("%d\n",i );
        i++;
    } while (i <= 10);


    return 0;
}