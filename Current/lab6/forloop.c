#include <stdio.h>
int main(void)
{

	// You can increment by numbers other than 1
	int j = 0;
	for (int i = 1; i < 25; i+=2)
	{
		printf("%d ", i);
		j++;
	}
	printf("\n");
	printf("%d\n",j );

    return 0;
}

