#include <stdio.h>
int main()
{
	float a, b;
	
	printf("Please enter two numbers to divide by each other: ");
	scanf("%f %f", &a, &b);
	
	printf("%f / %f = %f\n", a, b, a/b);
	
	return 0;
}
