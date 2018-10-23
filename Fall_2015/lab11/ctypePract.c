
#include <stdio.h>
#include <ctype.h>

int main()
{
       char array[5];

       for (int i = 0; i < 5; ++i)
       {
              printf("Enter a character:\n");
              array[i] = getchar();
              getchar();
       }

       for (int i = 0; i < 5; ++i)
       {
              if (islower(array[i]) == 1)
              {
                     array[i] = toupper(array[i]);
              }
       }
       printf("The New array\n");
       for (int i = 0; i < 5; ++i)
       {
              printf("%c\n",array[i]);
       }

       return 0;
}