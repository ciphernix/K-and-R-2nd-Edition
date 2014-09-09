/*
 * Exercise 1-9. Write a program to copy its input to is output, replacing each
 * string of one ore more blanks by a single blank.
 */

#include <stdio.h>

#define BLANK  ' '

int main(void)
{
	int blank_count, c;
	blank_count = 0;
	
	while ((c = getchar() ) != EOF)
	{
		if ( c == BLANK )
		{
			blank_count++;
			if (blank_count <= 1)
				putchar(c);
		}
		else
		{
			putchar(c);
			blank_count = 0;
		}
	}
	return 0;
}

