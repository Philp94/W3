#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, *p, *r;
    *p = i;
    *r = j;
    printf("enter two elements: ");
        scanf("%i%i", p, r);
            if (p > r)
                printf("The first element is bigger than the second.\n");
            else if (p == r)
                printf("The elements are the same.\n");
            else
            printf("The second element is bigger than the first.\n");
return 0;
}
