#include <stdio.h>

int main()
{
	int exampleArray[100]; //Declare a static array of size 100 (indices 0-99)

	//Show the junk memory values
	printf("Value of exampleArray before Initialization:\n");
	for (int i = 0; i < 100; i++){
		printf("%d, ",exampleArray[i]);
	}
	printf("\n");

	//Initialize the array
	for (int i = 0; i < 100; i++)
	{
		exampleArray[i] = i*i;
	}
	//Print the array again
	for (int i = 0; i < 100; i=i+2)
	{
		printf("Value of i %d ; Value of exampleArray: %d\n",i, exampleArray[i]);
	}
	return 0;
}