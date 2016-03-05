#include <stdio.h>
int main()
{
    int min, max;
    printf("Lets count between two numbers! ");
    scanf("%i%i", &min, &max);

    for ( ; min <= max; min++)   {
        printf("%i\n", min);
    }
    return 0;
}
