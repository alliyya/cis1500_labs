#include <stdio.h>

void replace(char * charList,int num);
void printCharList(char * charList,int num);

int main()
{
    int num;
    printf("How many characters would you like to enter\n");
    scanf("%d",&num);

    char listOfCharacters[num];

    //filling up the array
    for (int i = 0; i < num; ++i)
    {
        printf("Character #%d: ",i+1);
        getchar();
        listOfCharacters[i] = getchar();
    }

    //printing the array before the replacement
    printCharList(listOfCharacters,num);

    //replacing the vowels with ?
    replace(listOfCharacters,num);

    //printing the array after the replacement
    printCharList(listOfCharacters,num);
}

void replace(char * charList,int num)
{
    for (int i = 0; i < num; ++i)
    {
        if (charList[i] == 'a' || charList[i] == 'e' || charList[i] == 'i' || charList[i] == 'o' || charList[i] == 'u')
        {
            charList[i] = '?';
        }
    }
}

void printCharList(char * charList,int num)
{
    for (int i = 0; i < num; ++i)
    {
        printf("%c\n",charList[i]);
    }
    printf("\n");
}
