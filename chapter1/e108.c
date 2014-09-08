/*
 *Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>
#define BLANK ' '
#define NEWLINE '\n'
#define TAB '\t'

int main (void)
{
	int c, newline_count = 0, tab_count = 0, blank_count = 0;
	
	while ((c = getchar()) != EOF )
	{
		switch (c) 
		{
			case BLANK:
				++blank_count;
				break;
			case NEWLINE:
				++newline_count;
				break;
			case TAB:
				++tab_count;
				break;
			case default:
				break;	
		}
	}
	printf("Blanks = %i, Tabs = %i, Newlines = %i\n", blank_count, \
		tab_count, newline_count);
	return 0;
}
