#include "main.h"

/**
 * _isdigit - define if c character  is digit
 *
 * Description: Prints the alphabet with _putchar
 * @c: charater
 * Return: void
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
