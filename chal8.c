#include <stdio.h>

void decToOctal(int n)
{
    // array to store octal number
    int octalNum[100];

    int i = 0;
    while (n != 0)
    {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }

    // printing octal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}

void decimalToHexadecimal(long decimalnum, char hexadecimalnum[])
{
    long quotient, remainder;
    int i, j = 0;

    quotient = decimalnum;

    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    // Null-terminate the hexadecimal string
    hexadecimalnum[j] = '\0';

    // Reverse the hexadecimal string
    int start = 0;
    int end = j - 1;
    while (start < end)
    {
        // Swap characters at start and end
        char temp = hexadecimalnum[start];
        hexadecimalnum[start] = hexadecimalnum[end];
        hexadecimalnum[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    long decimalnum;
    char hexadecimalnum[100];
    char octalnum[100]; // Add a new variable for octal representation

    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);

    decimalToHexadecimal(decimalnum, hexadecimalnum);

    printf("Hexadecimal equivalent: %s\n", hexadecimalnum);
    printf("Octal equivalent is : ");
    decToOctal(decimalnum); // Call decToOctal with one argument (decimalnum)
    printf("\n");
    return 0;
}