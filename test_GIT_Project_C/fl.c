#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char alphabet[27];
    char first;
    char last;
    int counter;

    printf("Enter the first lowercase letter: ");
        scanf("%s", &first);
    printf("Enter the last lowercase letter: ");
        scanf("%s", &last);

    if (strcmp(&first, "a") == 0)            {
        printf("a, b, c\n");
    }
    else if (strcmp(&last, "c") == 0)        {
        printf("a, b, c\n");

    }





    return 0;
}
