#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
	printf("%d is greater than 5\n", n);

	else if (n == 0)
	printf("%d and is 0\n", n);

	else (n < 6 & != 0)
	return (0);
}
