// Program to find and interchange largest and smallest elements in an array

#include <stdio.h>

int main()
{
    int a[10], n, i, max, min, maxPos, minPos, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];
    maxPos = minPos = 0;

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxPos = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            minPos = i;
        }
    }

    temp = a[maxPos];
    a[maxPos] = a[minPos];
    a[minPos] = temp;

    printf("Array after swapping:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
