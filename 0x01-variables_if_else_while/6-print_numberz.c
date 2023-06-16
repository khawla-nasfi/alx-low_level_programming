#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints number of base 10 using Putchar'
 * Return: Alwayas 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
