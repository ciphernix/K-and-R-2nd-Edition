/*
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main(void)
{
	int c;

	while ( (c = getchar() != EOF ) != 0 )
		printf("The value of getchar() != EOF is %i\n", c);
	printf("The final value of c = getchar() != EOF is %i\n", c);

	return 0;
}

