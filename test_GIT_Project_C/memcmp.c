#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test (char *p);
int main()
{
    char *p1, *p2;

    p1 = p2 = (char *) malloc(5);
    if(p1 != NULL)  {
        strcpy(p1, "test");
        test(p2);
        printf("%s\n", p1);
    }
    return 0;
}
void test (char *p)
{
    printf("%s\n", p);
    free(p);
}
