#include "main.h"
/**
 * main - Entry point
 * Description: 'Print of alphabet in lowercase'
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;
	int j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
