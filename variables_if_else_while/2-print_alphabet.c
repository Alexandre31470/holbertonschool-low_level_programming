#include <stdio.h>
/**
 *main - Afficher alphabet en minuscule
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
	putchar('\n');
	return (0);
}
