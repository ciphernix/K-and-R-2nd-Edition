/*
 * Exercise 1-19
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */

#include <stdio.h>

#define MAX 1001

void reverse(char s[] )
{
	int i, j, temp;
	//i = j  = 0;
	i =0;
	j = 0;

	while (s[j] != '\n')
	{
		j++;
	}		
	--j;

	while ( i <= j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		//putchar(s[i]);
		++i;
		--j;
	}

}

/* getlines:  read a line into s, return length  */
int getlines(char s[],int lim)
{
	int c, i;
	
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int main (void)
{
	int c, len;
	char line[MAX];

	
	while ((len = getlines(line, MAX)) > 0)
	{
		reverse(line);
		printf("%s", line);
	}

	return 0;
}

