#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints 50 fib num starting with 1 & 2
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
