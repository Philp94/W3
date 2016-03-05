#include <stdio.h>
int main()
{
	float a, b;
	int i, j;
	char floatint;

		printf("Float(F) or Int(I)? [I/F]: ");
		scanf("%s", &floatint);

		if (floatint == 'F' || floatint == 'f') 		{
			printf("enter two values: ");
			scanf("%f %f", &a, &b);
			printf("%f * %f = %f\n", a, b, a*b);
		}
		else if (floatint != 'f' || floatint != 'F')	{
			printf("enter two values: ");
			scanf("%i %i", &i, &j);
			printf("%i * %i = %i\n", i, j, i*j);
		}
		else
		return 0;

}
