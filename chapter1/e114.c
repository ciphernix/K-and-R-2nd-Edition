/*
 * Exercise 1-14. Write a program to print a histogram of the frequencies of
 * different characters in its input.
 * lets account for alphabetic chars a-z and A-Z. Lower and upper case 
 * will be trrated the same
 */

#include <stdio.h>
#define IN   1
#define OUT  0
#define MAX  26
int main (void)
{
	int c, i, j;
	int letters[MAX] = 0;
	
	while ((c = getchar()) != EOF )
	{
		if ( c >= 'a' && c <= 'z' )
			++letters[c - 'a'];
		else if (c >= 'A' && c <= 'Z' )
			++letters[c - 'A'];
	}
	
	for (i = 0 ; i < MAX ; ++i )
	{
		printf("%c  ",i + 'A');
		for (j = 0; j < letters[i]  ; ++j )
			putchar('*');
		putchar('\n');
	}
	putchar('\n');
	return 0;
}