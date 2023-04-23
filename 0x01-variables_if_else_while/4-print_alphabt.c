#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i != 'Q' && i != 'E')
		{	
		int lower_char = tolower(i);
		putchar(lower_char);
		}
	}
	putchar('\n');
	return (0);
}
