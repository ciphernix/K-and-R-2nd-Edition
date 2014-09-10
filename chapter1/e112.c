/*
 * Exercise 1-12. Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN 1
#define OUT 0
#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

int main(void)
{
	int c,state = OUT;
	
	while ( (c = getchar() ) != EOF)
	{
		if (c == BLANK || c == TAB || c == NEWLINE )
		{
			if (state == IN )
				putchar(NEWLINE);
			state = OUT;
		}
		else
		{
			state = IN;
			putchar(c);
		}
	}
	putchar(NEWLINE);
	return 0;
}