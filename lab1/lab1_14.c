// Program to search an element in an array

#include <stdio.h>

int main()
{
    int a[10], n, key, i, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
