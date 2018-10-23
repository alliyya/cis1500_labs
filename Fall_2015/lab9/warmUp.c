#include <stdio.h>

void printBackwards(char *charArray)
{
    printf("\n");
    //print my name backwards one character at a time(on a newline)
    for (int i = 6; i >= 0; i--)
    {
        printf("%c\n",charArray[i]);
    }    
}

int main()
{

    char someChars[10];
    // char myName[7] = {"Alliyya"};
    char myName[7] ={'A','l','l','i','y','y','a'};

    //entering characters
    for (int i = 0; i < 10; ++i)
    {
        printf("Character #%d: ",i+1);
        someChars[i] = getchar();
        getchar();
    }

    //printing my name one character at a time(on a newline)
    for (int i = 0; i < 7; ++i)
    {
        printf("%c\n",myName[i]);
    }

    printBackwards(myName);
    
    printf("\n");
    //printing the array of characters on one line
    for (int i = 0; i < 10; ++i)
    {
        printf("%c",someChars[i]);
    }
    printf("\n");
}
