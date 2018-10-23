#include <stdio.h>
#include <string.h>
int main() {
    char str[60];
    int length;
    do {
        fgets(str, sizeof(str), stdin);
        length = strlen(str);
        if (str[length - 1] == '\n') {
            str[length - 1] = '\0';
        }
        printf("%s\n", str);
    } while (strcmp(str, "quit") != 0);
    return 0;
}

/*#include <stdio.h>

int main()
{
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
}*/