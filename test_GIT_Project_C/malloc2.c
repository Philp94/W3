#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    arr = (int *) malloc(10000000*sizeof(int));
        if (arr != NULL)
            free(arr);
    return 0;
}
