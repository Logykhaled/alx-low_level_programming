#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%f is positive\n", (double)n);
	}else if (n == 0)
	{
		printf("%f is zero\n", (double)n);
	}else
	{
		printf("%f is negative\n", (double)n);
	}
	return (0);
}
