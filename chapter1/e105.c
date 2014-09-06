/*
 * Exercise 1-5:
 * Modify the temperature conversion program to print the table in reverse
 * order, that is, from 300 degrees to 0.
 */

#include <stdio.h>

int main(void)
{
	float celsius, fahr;
	
	printf("Fahrenheit-Celsius table\n");
	printf("Fahrenheit\tCelsius\n");
	printf("-----------\t-------\n");
	
	for (fahr = 300.0; fahr >= 0.0; fahr -= 20.0)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %15.1f\n", fahr, celsius);
	}
	return 0;
}

