// Program to print multiplication table of a given number

#include <stdio.h>

int main()
{
    int n, limit;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
