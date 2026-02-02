// Program to swap three numbers without using a temporary variable

#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("a = %d\nb = %d\nc = %d", a, b, c);
    return 0;
}
