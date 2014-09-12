/*
 * Exercise 1.15. Rewrite the temperature conversion program of Section 1.2
 * to use a function for conversion.
 */

#include <stdio.h>

void fahr_celsius(int lower, int upper, int step);
float fahr_to_celsius(float fahr);

float fahr_to_celsius(float fahr)
{
	return (5.0/9.0) * (fahr-32.0);
}

void fahr_celsius(int lower, int upper, int step)
{
	float fahr, celsius;
	
	printf("Fahrenheit-Celsius table\n");
	printf("Fahrenheit\tCelsius\n");
	printf("----------\t--------\n");
	
	for (fahr = lower; fahr <= upper; fahr += step)
	{
		printf("%3.0f\t\t%6.1f\n", fahr, fahr_to_celsius(fahr));
	}
	
}

int main(void)
{
	float lower, upper, step;
	
	lower = 0;		// lower limit of temperatuire scale 
	upper = 300;	// upper limit 
	step = 20;		// step size 
	
	fahr_celsius(lower, upper, step);
	printf("\n");
	return 0;
}
