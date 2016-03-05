#include <stdio.h>
int main()
{
	int a, b;

	printf("Please enter two numbers to work out the remainder: ");
	scanf("%i %i", &a, &b);

	printf("%i mod %i = %i\n", a, b, a%b);

	return 0;
}
