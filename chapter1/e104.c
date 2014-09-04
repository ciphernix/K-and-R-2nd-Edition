/*
 *Exercise 1-4: 
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 * F = 9/5 (C+32)
 */

#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version */

int main(void)
{
	float fahr, celsius;
    float lower, upper, step;
	
    lower = 0;      /* lower limit of temperatuire scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
	
    celsius = lower;
	printf("Celsius-Fahrenheit table\n");
	printf("Celsius\tFahrenheit\n");
	printf("--------\t----------\n");
    while (celsius <= upper) 
	{
    	fahr = (9.0 / 5.0) * (celsius + 32.0);
        printf("%3.0f \t%6.1f\n", celsius, fahr);
        celsius += step;
	}
	
	return 0;
}