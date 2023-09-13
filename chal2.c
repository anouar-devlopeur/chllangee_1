#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c, F;
    printf("enter tmp en C"\n);
    scanf("%lf", &c);
    c = (F - 32) / 1.8 if (c < 0)
    {
        printf("très froid");
    }
    else if (c >= 0 && c <= 15)
    {
        printf(" froid");
    }
    else if (c >= 25 && c <= 30)
    {
        printf(" chaud");
    }
    else
    {
        printf(" très chaud");
    }

    return 0;
}