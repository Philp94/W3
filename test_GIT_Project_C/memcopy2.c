#include <stdio.h>
#include <string.h>


int main()
{
    int i, size, arr1[i], arr2[i];
    printf("Enter a size: ");
    scanf("%i", &size);

    for (i=0; i < size; i++)
        //arr1[i] = i+i;

    memcpy(arr2, arr1, sizeof(arr1));

    for (i=0; i < size; i++)
        printf("%d\n", arr2[i]);
    return 0;
}
