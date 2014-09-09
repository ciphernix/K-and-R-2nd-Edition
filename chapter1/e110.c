/*
 * Exercise 1-10. Write a program to copy its input to its output, replacing each
 * tab by \t, each backspace by \b, and each backslah by \\. This makes tabs and
 * backspaces visible in an unambigious way.
 */

#include <stdio.h>

#define BACKSPACE '\b'
#define BLANK ' '
#define BACKSLASH '\n'
#define TAB '\t'

int main (void)
{
	int c;

	while ( (c = getchar() ) != EOF )
	{
		switch (c)
		{
			case BLANK:
				putchar('\\');
				putchar('b');
				break;
			case TAB:
				putchar('\\');
				putchar('\t');
				break;
			case 
