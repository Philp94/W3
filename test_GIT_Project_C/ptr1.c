#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, l;
    int *p, *s, *r, *t;

    p = &i;
    s = &j;
    r = &k;
    t = &l;

    printf("Enter the first number: ");
    scanf("%i", p);

    printf("Enter a second number: ");
    scanf("%i", s);

    printf("Enter a third number: ");
    scanf("%i", r);

    printf("Enter a fourth number: ");
    scanf("%i", t);

    printf("%i\n%i\n%i\n%i\n", *p, *s, *r, *t);


    return 0;
}
