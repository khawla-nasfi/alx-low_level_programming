#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints number of base 10 using Putchar'
 * Return: Alwayas 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 98);
	}
	putchar('\n');
	return (0);
}
