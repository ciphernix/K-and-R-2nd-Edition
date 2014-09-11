/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; 
 * a vertical orientation is more challenging.
 */

#include <stdio.h>

#define IN  1		/* inside a word */
#define OUT 0		/*	outside a word */
#define MAX 64		/* max word length */

int main(void)
{
	int word_length[MAX];
	int c, state = OUT, length = 0;
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
				length = 0;
			}
			state = OUT;
		}
	}
	
	for ( i = 1; i < MAX; i++ )
	{
		printf("%2i   ", i);
		for ( j = word_length[i]; j > 0; --j )
			putchar('*');
		putchar('\n');
	}
	return 0;
}
