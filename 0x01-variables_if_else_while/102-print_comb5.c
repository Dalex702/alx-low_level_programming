#include <stdio.h>
/**
 * main - assign a random number to the variable n eavh time
 * it is executed and print the last digit of the number
 * Return: alway returns 0
 */

int main(void)
{
	int i, j;
	for (i = 0; i< 100; i++)
	{
		for (j =0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i /10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
