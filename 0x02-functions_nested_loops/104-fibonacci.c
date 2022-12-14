#include <stdio.h>
/**
 * main - block to be executed
 * computes
 * Return: always returns 0
 */
int main(void)
{
	unsigned long long a = 0, b = 1, c;

	int i;

	for (i = 1; i <= 98; i++)
	{
		c = a + b;

		if (i != 98)
		{
			printf("%d, ", c);
		}
		else
		{
			printf("%d\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
