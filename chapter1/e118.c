/*
 *Exercise 1-18. Write a program to remove trailing blanks and tabs from each
 *line of input, and to delete entirely blank lines.
 */

#include <stdio.h>

#define MAXBUFFER 1001

int main (void)
{
	char buffer[MAXBUFFER];
	int c;
	int i = 0, non_blank = 0;

	while ((c = getchar() ) != EOF )
	{
		if ( c == ' ' || c == '\t' )
		{
			buffer[i] = c;
			++i;
			non_blank = 0;
		}
		else if ( c != '\n' )
		{
			buffer[i] = '\0';
			printf("%s", buffer);
			putchar(c);
			non_blank = 1;
			i = 0;
		}
		else if (non_blank) // print  new line if non_blank = 1
		{
			putchar(c);
			i = 0;
			non_blank = 0;
		}

	}
	
	return 0;
}                    							

