// Program to find the sum of digits and reverse of a number

#include <stdio.h>

int main()
{
    int n, r, sum = 0, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        rev = rev * 10 + r;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reverse = %d", rev);

    return 0;
}
