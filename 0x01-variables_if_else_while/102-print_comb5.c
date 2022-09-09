#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int p, q;

	for (p = 0; p <= 100; p++)
	{
		for (q = + 1; q <= 100; q++)
		{
			if (q > p)
			{
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				putchar(' ');
				putchar((q / 10) + '0');
				putchar((q % 10) + '0');

				if (p != 98)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}

	putchar('\n');

	return (0);
}
