#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main (void)
{
	char word[7] = "putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
}
