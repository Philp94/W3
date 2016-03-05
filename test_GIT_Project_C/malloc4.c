#include <stdio.h>
#include <stdlib.h>


	typedef struct rec
	{
    		int i;
    		float pi;
    		char a;
	}record;

	int main()
	{
    		record *ptr1;

    		ptr1 = (record *) malloc (sizeof(record));

    		(*ptr1).i = 10;
    		(*ptr1).pi = 3.14;
    		(*ptr1).a = 'a';

    		printf("First value: %d\n",(*ptr1).i);
    		printf("Second value: %f\n", (*ptr1).pi);
    		printf("Third value: %c\n", (*ptr1).a);

    		free(ptr1);

    		return 0;
	}
