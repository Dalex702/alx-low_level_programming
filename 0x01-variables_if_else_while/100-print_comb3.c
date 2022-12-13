#include <stdio.h>
/**
 * main - A random number is assigned to the variable j each time
 * it is executed and the last digit of the number stored in the
 * variable j  is printed 
 * Return: alway returns 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if (i != 56 || j != 57)
				{				
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
