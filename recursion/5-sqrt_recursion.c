#include "main.h"
/**
 * check - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @i: base number to check
 * Return: natural square root of number base
 */
int check(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (check(n + 1, i));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
