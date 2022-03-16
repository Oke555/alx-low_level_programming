#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i[7] = "putchar";
	_putchar('_');
	for (i = '0'; i < '8'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
