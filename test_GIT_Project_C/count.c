#include <stdio.h>
int main()
{
    int counter, max;

    printf("what do you want to count to? \n");
    scanf("%i", &max);

    for (counter = 1; counter <= max; counter++)
    {
        printf("%i\n", counter);
    }

return 0;
}
