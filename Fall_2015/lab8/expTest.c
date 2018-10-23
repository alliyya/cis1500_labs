
#include <stdio.h>

int exponent(int base, int power)
{
    int num;

    num = 0;
    num = base;
    
    if (power != 0)
    {
        for (int i = 1; i < power; ++i)
        {
            num *= base;
        }
    }
    else if (power == 0)
    {
        num = 1;
    }
    return num;
}

int main()
{
    int base;
    int power;

    base = 0;
    power = 0;

    printf("Calculating exponents\n");
    
    printf("Base: ");
    scanf("%d",&base);

    printf("Power: ");
    scanf("%d", &power);

    printf("%d^%d = %d\n",base, power, exponent(base,power));
    return 0;
}