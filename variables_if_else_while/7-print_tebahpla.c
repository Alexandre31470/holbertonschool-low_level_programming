#include <stdio.h>
/**
 *main - Afficher alphabet en minuscule mais a l'envers
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
{
	putchar(alphabet);
	alphabet--;
}
	putchar('\n');
	return (0);
}
