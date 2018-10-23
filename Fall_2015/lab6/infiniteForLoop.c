#include <stdio.h>
int main(void)
{
    int i;

    i = 0;
    
    for (i = 0; i != 9; i++)
    {
        printf("%d\n",i);
	// this i++ causes the loop to never reach it's end condition!
	i++;
    }



    return 0;
}
