#include <stdio.h>
int main()
{
    int *ptr;

    printf("Val = %p\n", ptr);
    ptr = NULL;
    printf("Val = %p\n", ptr);
    return 0;
}
