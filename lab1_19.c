// Program to find largest and smallest elements in an array

#include <stdio.h>

int main()
{
    int a[10], n, i, max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Largest = %d\nSmallest = %d", max, min);

    return 0;
}
