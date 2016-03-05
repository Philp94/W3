#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *arr;
    arr = (char *) malloc(6);
        if (arr != NULL)
            {
                memcpy(arr, "ABCDE", 6);
                printf("%s\n", arr);
                free(arr);
            }
    return 0;
}
