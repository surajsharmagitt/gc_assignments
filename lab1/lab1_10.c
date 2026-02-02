// Program to check whether a number is an Armstrong number

#include <stdio.h>

int main()
{
    int n, temp, sum = 0, r;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
