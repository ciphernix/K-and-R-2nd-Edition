/*
 * Exercise 1-14. Write a program to print a histogram of the frequencies of
 * different characters in its input.
 * lets account for alphabetic chars a-z and A-Z. Lower and upper case 
 * will be trrated the same
 * This will be a vertical histogram.
 */

#include <stdio.h>

#define IN   1
#define OUT  0
#define MAX  26

int main (void)
{
	int c, i, j, cursor = 0;
	int letters[MAX];

	for ( i = 0; i < MAX; i++ )
		letters[i] = 0;
	
	while ((c = getchar()) != EOF )
	{
		if ( c >= 'a' && c <= 'z' )
		{	
			i = ++letters[c - 'a'];
			if ( i > cursor )
				cursor = i;
		}	
		else if (c >= 'A' && c <= 'Z' )
		{	
			i = ++letters[c - 'A'];
			if ( i > cursor )
				cursor = i;
		}
	}
	
		while (cursor > 0 )
	{
		for ( i = 0; i < MAX; i++ )
		{
			if ( letters[i] >= cursor )
			{
				printf(" *");	
			}
			else  
			{
				printf("  ");
			}
		}
		putchar('\n');
		--cursor;
	}


	for (i = 0 ; i < MAX ; ++i )
	{
		printf(" %c", i + 'A');	
	}
	putchar('\n');
	return 0;
}
