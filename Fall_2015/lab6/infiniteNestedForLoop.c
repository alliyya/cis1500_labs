#include <stdio.h>
int main(void)
{
    int i;
    int j;

    i = 0;
    j = 0;

    int count = 10;
    int count2 = 15;
    for (i = 0; i < count; ++i)
    {
	//This loop never reaches it's end condition because i not j is being incremented!
	for (j = 0; j < count2; ++i)
        {
            printf("Hello\n");
            printf("%d\n",i );
        }
    }

    return 0;
}
