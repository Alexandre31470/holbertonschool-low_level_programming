#include "main.h"
/**
* prime_find - find if the number is prime.
* @x: The prime number
* @y: The number check
* Return: 1 if prime and 0 otherwise.
*/
int prime_find(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (prime_find(x, y + 1));
}
/**
* is_prime_number - Return prime number
* @n: Number prime
* Return: 1 if prime and 0 otherwise.
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime_find(n, 2));
}
