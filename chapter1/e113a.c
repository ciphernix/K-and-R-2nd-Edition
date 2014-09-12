/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; 
 * a vertical orientation is more challenging.
 * 
 *	VERTICAL ORIENTATION
 */

#include <stdio.h>

#define IN  1		/* inside a word */
#define OUT 0		/*	outside a word */
#define MAX 16		/* max word length */

int main(void)
{
	int word_length[MAX];
	int c, state = OUT, cursor = 0, length = 0;
	int i, j;
	
	for (i = 0; i < MAX ; i++ )
		word_length[i] = 0;
	
	while ((c = getchar()) != EOF )
	{
		if ( (c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z' ) )
		{
			state = IN;
			++length;
		}
		else
		{
			if (state == IN )
			{
				length %= MAX;	/*make sure length is < MAX */
				++word_length[length];
				if (cursor < length )
					cursor = length;
				length = 0;
			}
			state = OUT;
		}
	}
	
	while (cursor > 0 )
	{
		for ( i = 1; i < MAX; i++ )
		{
			if ( word_length[i] >= cursor )
				printf(" * ");
			else  
				printf("   ");
		}
		putchar('\n');
		--cursor;
	}
	putchar('\n');
	for (i = 1; i < MAX; i++)
		printf(" %2i",i);
	putchar('\n');
	
	return 0;
}
