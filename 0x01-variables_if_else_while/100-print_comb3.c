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
		for (m = 1; m <= 9; m++)
		{
			putchar(i + '0');
			putchar(m + '0');
			if (i != 9 && m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);

}
