// Program to check whether a number is palindrome or not

#include <stdio.h>

int main()
{
    int n, rev = 0, r, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if (rev == temp)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
