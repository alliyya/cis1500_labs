#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(){

    char originalS [SIZE];
    char newString [SIZE/2];
    int i,k;

    printf("Enter a string: ");
    scanf("%s", originalS);


    k=0; //Set the iterator value to 0 to start, very important!
    length = strlen(originalS)

    for (i=0; i < length; i++)
    {
        if (i % 2){
            newString[k] = originalS[i];
            k++;
        }
    }
    newString[k] = '\0';
    printf("Odd String = %s \n", newString);

    return 0;
}
