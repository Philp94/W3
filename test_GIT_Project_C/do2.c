#include <stdio.h>

main()

{

int a , b;

do {

printf("\nEnter first number: ");

scanf("%d" , &a);

printf("\nEnter second number: ");

scanf("%d" , &b);

if (a < b) {

printf("\n\nFirst number is less than second\n");

printf("Their difference is : %d\n" , b-a);

printf("\n");

}

if (a > b) {

printf("\nSecond number is less than first\n");

printf("Their difference is : %d\n" , b-a);

printf("\n");

}

if (a == b) {

printf("\nEqual\n");

printf("Their difference is : %d\n" , b-a);

printf("\n");

}



printf("\n");

} while (a < 999);

}
