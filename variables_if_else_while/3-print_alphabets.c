#include <stdio.h>
/**
 *main - Afficher alphabet en minuscule puis en majuscule
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';
	char majuscule = 'A';

	while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}

	while (majuscule <= 'Z')

{
	putchar(majuscule);
	majuscule++;
}

	putchar('\n');
	return (0);
}
