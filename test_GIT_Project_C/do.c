#include <stdio.h>

main()

{

int a , b;

do {

printf("\nEnter first number: ");

scanf("%d" , &a);

printf("\nEnter second number: ");

scanf("%d" , &b);

if (a < b) printf("\n\nFirst number is less than second\n\n");

if (b < a) printf("Second number is less than first\n\n");

} while (a < 999);

}
