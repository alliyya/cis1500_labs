#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char chooseContainer()
{
	char choice;
	printf("Do you choose bottles (b), cartons (c) or cans (s)? ");
	choice = getchar();
	getchar(); //remove the newline from the buffer
	
	return choice;
}

int chooseItem()
{

	int beverage;
	printf("Do you choose pop(1), beer(2) or milk(3)? ");
	scanf("%d", &beverage);
	getchar(); //remove the newline from the buffer
	
	return beverage;
	
}

void printContainer(char choice)
{
	switch(choice)
	{
		case 'b':
			printf("bottles");
			break;
		case 'c':
			printf("cartons");
			break;
		case 's':
			printf("cans");
			break;
		default:
			printf("bottles");
	}
	return;
}

void printItem(int bev)
{
	switch(bev)
	{
		case 1:
			printf("pop");
			break;
		case 2:
			printf("beer");
			break;
		case 3:
			printf("milk");
			break;
		default:
			printf("water");	
	}
	
}


void printThirdLine(char container)
{
	int line;
	srand(time(NULL));
	line = rand()%2;
	if(line == 0)
		printf("Take one down and pass it around \n");
	else
	{
		printf("If one of those ");
		printContainer(container);
		printf(" should happen to fall\n");
	}

	return;

}


int main(void)
{
	int drink;
	char cont;
	int verses;
	int i;

	printf("How many verses? ");
	scanf("%d",&verses);
	drink = chooseItem();
	cont = chooseContainer();
	
	for(i = verses; i > 0; i = i-1)
	{
		printf("%d ", i);
		printContainer(cont);
		printf(" of ");
		printItem(drink);
		printf(" on the wall\n");

		printf("%d ", i);
		printContainer(cont);
		printf(" of ");
		printItem(drink);
		printf("\n");
		
		printThirdLine(cont);
		
		printf("%d ", i-1);
		printContainer(cont);
		printf(" of ");
		printItem(drink);
		printf(" on the wall\n");
		printf("\n");
	}

	return 0;
}
