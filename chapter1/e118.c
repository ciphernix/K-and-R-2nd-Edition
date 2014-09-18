/*
 *Exercise 1-18. Write a program to remove trailing blanks and tabs from each
 *line of input, and to delete entirely blank lines.
 */

#include <stdio.h>

#define MAXBUFFER 1001

int getline(char buffer[], int lim);

int getline(char buffer[], int lim)
{
	int c, i;
	
	i = 0;
	while ((c = getchar()) != EOF && c != '\n' && i < lim - 1 )
	{
		if (c != ' ' && c != '\t' )
		{
			buffer[i] = c;
			++i;
		}
	}
	
	buffer[i] = '\n';
	++i;
	
	buffer[i] = '\0';
	
	if (c == EOF )
		return EOF;
	else 
		return i;
}

int main (void)
{
	char buffer[MAXBUFFER];
	
	while (getline(buffer, MAXBUFFER) != EOF)
	{
		if ( buffer[0] != '\n') //only print non empty line
			printf("%s",buffer);
	}
	
	return 0;
}