#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int m = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}

	putchar('\n');
	return (0);
}
