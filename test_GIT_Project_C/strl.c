#include <stdio.h>
#include <string.h>

int main ()
{
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCD";

   len = strspn(str1, str2);

   printf("Length of initial segment matching %i\n", len );

   return(0);
}
