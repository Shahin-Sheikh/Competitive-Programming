#include <stdio.h>

int main()
{
    int *x, y;
    y = 10;
    x = &y;
    printf("%d\n", *x);
    return 0;
}