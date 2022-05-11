#include <stdio.h>
int main(void)
{
    char *ptr;
    char string[] = "Hello World!";
    ptr = string;
    ptr += 6;
    printf("%s\n", ptr);

    return 0;
}
