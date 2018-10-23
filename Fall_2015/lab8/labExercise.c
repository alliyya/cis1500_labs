#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

char chooseContainer(void)
{
    char container;
    
    printf("Select a container: bottles(a), cartons(b), cans(c)\n");
    container = getchar();
    getchar();
    
    return container;
}

int chooseItem(void)
{
    int item;    
    
    printf("Select a drink: pop(1), beer(2), water(3)\n");
    scanf("%d",&item);

    return item;
} 

void printContainer(char choice)
{
    switch(choice)
    {
        case 'a':
            printf("bottles");
            break;
        case 'b':
            printf("cartons");
            break;
        case 'c':
            printf("cans");
            break;
        default:
            printf("bottles");
            break;
    }
    //bottle cartons cans
}
void printItem(int bev)
{
    //pop beer water
    switch(bev)
    {
        case 1:
            printf("pop");
            break;
        case 2:
            printf("beer");
            break;
        case 3:
            printf("water");
            break;
        default:
            printf("water");
            break;
    }
}

void printThirdLine(char container)
{
    int line;

    line = rand()%2;

    if (line == 0)
    {
        printf("Take one down and pass it around\n");
    }
    else
    {
        printf("If one of those ");
        printContainer(container);
        printf(" should happen to fall\n");
    }
}

int main()
{
    int drink;
    char cont;
    int verses;
    int i;

    srand(time(NULL));

    printf("How many verses?\n");
    scanf("%d", &verses);

    drink = chooseItem();
    cont = chooseContainer();
                            //i--
    for (i = verses; i > 0; i = i - 1)
    {
        printf("%d ",i);
        printContainer(cont);
        printf(" of ");
        printItem(drink);
        printf(" on the wall\n");

        printf("%d ",i);
        printContainer(cont);
        printf(" of ");
        printItem(drink);
        printf("\n");

        printThirdLine(cont);

        printf("%d ",i-1);
        printContainer(cont);
        printf(" of ");
        printItem(drink);
        printf(" on the wall\n");

    }

    return 0;
}
