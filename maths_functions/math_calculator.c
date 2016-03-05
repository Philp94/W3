#include <stdio.h>
int main()
{
	int i, j;

	printf("Enter two numers: ");
	scanf("%i%i", &i, &j);

	printf("%i * %i = %i\n", i, j, i*j); 
	printf("%i + %i = %i\n", i, j, i+j);
	printf("%i / %i = %i\n", i, j, i/j);


}

