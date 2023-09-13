#include <stdio.h>
int main()
{

    int n, inv;
    printf("enter le nbre de 3 chiffres\n");
    scanf("%d", &n);
    if (n < 100 || n > 999)
    {

        printf("enter un nbre de 3 chfres\n");

        return 1;
    }
    inv = (n % 10) * 100 + ((n / 10) % 10) * 10 + n / 100;
    printf("L'inverse de %d est : %d\n", n, inv);

    return 0;
}