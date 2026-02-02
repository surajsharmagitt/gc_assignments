// Program to illustrate call by value and call by reference

#include <stdio.h>

void callByValue(int x)
{
    x = 20;
}

void callByReference(int *x)
{
    *x = 20;
}

int main()
{
    int a = 10;

    callByValue(a);
    printf("After call by value: %d\n", a);

    callByReference(&a);
    printf("After call by reference: %d\n", a);

    return 0;
}
