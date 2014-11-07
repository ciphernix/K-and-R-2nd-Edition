/*
 * Exercise 1-21. Write a program entab that replaces strings of blanks by the
 * minimum number of tabs and blanks to achieve the same spacing. Use the same
 * tab stops as for detab. When either a tab or a single blank would suffice 
 * to reach a tab stop, which should be given preference?
 */

#include <stdio.h>

#define TABSTOP 7

int main(void)
{
	int c, pos = 0;
	
	while ( (c = getchar() ) != EOF )
	{	
		if (c == ' ' )
		{
			if (pos % TABSTOP == 0 )
				putchar('\t');
			else 
				putchar(c);

			pos++;
		}
		
		else if ( c == '\n') 
		{
			pos = 0;
			putchar(c);	
		}
		else 
		{
			putchar(c);
			pos++;	
		}
	}
	return 0;
}
