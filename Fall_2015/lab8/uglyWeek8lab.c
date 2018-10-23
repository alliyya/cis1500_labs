#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int drink;
    char cont;
    int verses;
    int line;
    int i;

    printf("How many verses? ");
    scanf("%d",&verses);
    
    printf("Do you choose pop(1), beer(2) or milk(3)? ");
    scanf("%d", &drink);
    getchar(); //remove the newline from the buffer

    printf("Do you choose bottles (b), cartons (c) or cans (s)? ");
    cont = getchar();
    getchar(); //remove the newline from the buffer
    
    
    for(i = verses; i > 0; i = i-1)
    {
        printf("%d ", i);

        switch(cont)
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

        printf(" of ");
        switch(drink)
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
        printf(" on the wall\n");

        printf("%d ", i);
        switch(cont)
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
        printf(" of ");
        switch(drink)
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
        printf("\n");
        
        line = rand()%2;
        if(line == 0)
            printf("Take one down and pass it around \n");
        else
        {
            printf("If one of those ");
            switch(cont)
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
            printf(" should happen to fall\n");
        }


        printf("%d ", i-1);
        switch(cont)
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
        printf(" of ");
        switch(drink)
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
        printf(" on the wall\n");
        printf("\n");
    }

    return 0;
}
