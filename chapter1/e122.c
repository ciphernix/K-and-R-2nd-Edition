/*
 * Exercise 1-22:
 * Write a program to ``fold'' long input lines into two or shorter lines
 * after the last non-blank character that occurs before the n-th column of
 * input. Make sure your program does something intelligent with very long
 * lines, and if there are no blanks or tabs before the specified column.
 */

#include <stdio.h>

#define WIDTH 80

int main (void)
{
	int c, char_count = 0;
	
	while ((c = getchar()) != EOF )
	{	
		if (c == '\n')
			char_count = 0;
			
		if ((char_count + 1) % WIDTH == 0 )
		{
			if (c == ' ' || c == '\t' )
			{
				printf("\n ");
				char_count++;
			}
			else 
			{
				printf("-\n ");
				char_count++;
			}
		}
		putchar(c);
		char_count += 1;
	}
		
}
/*
for each line in getchar putchar until char count == WIDTH -1
if char[WIDTH - 1] == blank or tab then put new line and |__ then print char 
else print dash ('-') then put put new line and |_ char
*/
