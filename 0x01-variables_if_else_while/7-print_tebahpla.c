#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 122; alphabet >=97; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
