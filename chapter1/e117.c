/*
 * Exercise 1-17: 
 * Write a program to print all input lines that are longer than 80 characters.
 */
#include <stdio.h>

#define MAXLINE 81	/* maximum input line length */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* print lines longer than MAXLINE */

int main(void)
{
	int len;	/* current line length */
	char line[MAXLINE];	/* current input line */
	char c;
	

	while ((len = getlines(line, MAXLINE)) > 0)
	{
		if (len == MAXLINE-1 && line[len-1] != '\n') //line overflows
		{	
			printf("%s", line);
			while ((c=getchar())!=EOF && c!='\n')
				putchar(c);
			
			if (c == '\n')
				putchar('\n');
		}

	}
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
