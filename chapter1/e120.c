/*
 * Exercise 1-20. Write a program detab that replaces tabs in the input with 
 * the proper number of blanks to space to the next tab stop. Assume a fixed 
 * set of tab stops, say every n columns. Should n be a variable or a symbolic 
 * parameter?”
 */

#include <stdio.h>

#define TABSTOP 7 //number of spaces

int main (void)
{
	int c;
	int i = 0;
	
	while (( c=getchar() ) != EOF )
	{
		if (c == '\n')
		{
			putchar(c);
			i = 0;
		}
		if (c == '\t')
			while ((TABSTOP - i ) % TABSTOP != 0)
			{
				putchar(' ');
				++i;
			}
		else
		{
			putchar(c);
			++i;
		}
	}
	
	return 0;
}