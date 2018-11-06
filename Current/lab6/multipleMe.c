#include <stdio.h>
#include <string.h>

#define SIZE 10

void multiplyString(char originalStr[],char newString[],int multiplier);

int main(){

    char originalS [SIZE];
    char newString [SIZE * 5];
    int num = 0;

    printf("Enter a string: ");
    scanf("%s", originalS);

    printf("\nFor multiple: please enter an integer between 1 and 5:");
    scanf("%d",&num);

    multiplyString(originalS, newString, num);
    printf("%s\n", newString);

    return 0;
}

void multiplyString(char originalStr[],char newString[],int multiplier) {
    for (int i = 0; i < multiplier; ++i)
    {
        strcat(newString,originalStr);
    }
    printf("New String = %s \n", newString);

}
