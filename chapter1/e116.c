/*
 * Exercise 1-16. Revise the main routine of the longest-line program so it
 * will correctly print the length of arbitrary long input lines, and as much
 * as possible of the text.
 */

#include <stdio.h>

#define MAXLINE 16 /* maximum input line length */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main(void)
{
	int len;		/* current line length */
	int i;
	int max;		/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */
	char c; 
	

	max = 0;
	while ((len = getlines(line, MAXLINE)) > 0)
	{
		if (len == MAXLINE-1 && line[len-1] != '\n')  //line overflows
		{
			for (i = 0; (c=getchar())!=EOF && c!='\n'; i++)
				;
			len += i;
			if ( c == '\n' )
				++len;
		}

		if (len > max)
		{
			max = len;
			copy(longest, line);	
		}
	}
	if (max > 0) /* there was a line */
		printf("%i %s", max, longest);
	printf("\n");
	return 0;
}

/* getlines:  read a line into s, return length  */

int getlines(char s[],int lim)
{
	int c, i;
	
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
