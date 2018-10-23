#include <stdio.h>

int main()
{
    char randArray[] = {"ABCDE"};
    char anotherArray[] = {'a','b','c','d','e'};
    char moreArrays[5];
    int i;

    for (i = 0; i < 5; ++i)
    {
        moreArrays[i] = 'a'+i;
    }

    printf("randArray\n");
    for (i = 0; i < 5; ++i)
    {
        printf("%c\n",randArray[i]);
    }

    printf("anotherArray\n");
    for (i = 0; i < 5; ++i)
    {
        printf("%c\n",anotherArray[i]);
    }

    printf("moreArrays\n");
    for (i = 0; i < 5; ++i)
    {
        printf("%c\n",moreArrays[i]);
    }

    return 0;
}