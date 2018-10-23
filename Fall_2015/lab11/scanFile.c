#include <stdio.h>

int main() 
{
	char myString[4096];
	FILE * fp;				//File pointer
	int i;

	/*Initialize variales.*/
	fp = NULL;
	i = 0;

	/*Initialize the character array.*/
	for (i = 0; i < 4096; i++)
	{
		myString[i] = '\0';
	}

	/*Opening file for reading.*/
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
	{
		printf("Error opening file.");
		return -1;
	}

	printf("String read from file: \n");
	
	/*Read until the end of file.*/
	while ( (fgets(myString, 4096, fp) != NULL) )
	{
		printf("%s", myString);
	}

	/*Close file.*/
	fclose(fp);

	return 0;
}

