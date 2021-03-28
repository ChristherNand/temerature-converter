#include <stdio.h>
#include "utils.h"

int main(void)
{
	float fahr, celsius;
	int lower = 0, upper = 300, step = 20;
	char header[30] = "This is the remperature table";
	fahr = lower;
	printf("%s\n", header);
	while (fahr <= upper)
	{
		celsius = findCelsius(fahr);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = sum(fahr, step);
	}

	return 0;
}
