#include <stdio.h>
#define N 7
int main()
{
    char str[] = "abpqx\n";
    int i = 0;
    for (i = 0; i < N - 2; i++)
    {
        if (i % 2)
        {
            printf("%c", str[i]++);
        }
        else
        {
            printf("%c", str[i]--);
        }
    }
    return 0;
}