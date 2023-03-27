#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (i=count-1; i >= 0; i--)
		
		_putchar(s[i]);
	_putchar('\n');
}
