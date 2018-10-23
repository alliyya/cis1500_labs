#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fileptr;
    char array[10];

    fileptr = fopen("rand.txt","r");

    if (fileptr == NULL)
    {
        fprintf(stderr, "Failed to open file");
        return (0);
    }

    while(fgets(array,10,fileptr) != NULL)
    {
        if (array[strlen(array)-1] =='\n')
        {
            array[strlen(array)-1] = '\0';
        }
        printf("%s\n",array);
    }

    return 0;
}